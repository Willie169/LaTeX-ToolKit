#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <sstream>

bool startsWith(const std::string& str, const std::string& prefix) {
    return str.substr(0, prefix.length()) == prefix;
}

int countLeadingWhitespace(const std::string& str) {
    int count = 0;
    while (count < str.length() && (str[count] == ' ' || str[count] == '\t')) {
        count++;
    }
    return count;
}

std::string getIndent(int level) {
    return std::string(level * 2, ' ');
}

class LatexTransformer {
private:
    int currentLevel = 0;
    std::stack<int> itemizeLevels;
    
    bool isEndingCommand(const std::string& line) {
        return startsWith(line, "\\part") ||
               startsWith(line, "\\chapter") ||
               startsWith(line, "\\section") ||
               startsWith(line, "\\subsection") ||
               startsWith(line, "\\subsubsection");
    }
    
    void closeItemizeLevels(std::stringstream& output, int targetLevel = 0) {
        while (!itemizeLevels.empty() && itemizeLevels.top() > targetLevel) {
            output << getIndent(std::max(itemizeLevels.top() - 2, 0)) << "\\end{itemize}\n";
            itemizeLevels.pop();
        }
    }
    
    std::string extractContent(const std::string& line) {
        size_t start = line.find('{');
        size_t end = line.rfind('}');
        if (start != std::string::npos && end != std::string::npos) {
            return line.substr(start + 1, end - start - 1);
        }
        return "";
    }

public:
    std::string transform(const std::string& input) {
        std::stringstream output;
        std::istringstream iss(input);
        std::string line;
        
        while (std::getline(iss, line)) {

            int indent = countLeadingWhitespace(line);
            line = line.substr(indent);

            if (isEndingCommand(line)) {
                closeItemizeLevels(output);
                output << std::string(indent, ' ') << line << '\n';
                continue;
            }

            if (startsWith(line, "\\paragraph{")) {
                closeItemizeLevels(output, 1);
                if (itemizeLevels.empty()) {
                    output << std::string(indent, ' ') << "\\begin{itemize}\n";
                    itemizeLevels.push(1);
                }
                output << std::string(indent, ' ') << getIndent(1) << "\\item " 
                      << extractContent(line) << '\n';
            }
            else if (startsWith(line, "\\subparagraph{")) {
                closeItemizeLevels(output, 2);
                if (itemizeLevels.empty() || itemizeLevels.top() < 2) {
                    output << std::string(indent, ' ') << getIndent(1) << "\\begin{itemize}\n";
                    itemizeLevels.push(2);
                }
                output << std::string(indent, ' ') << getIndent(2) << "\\item " 
                      << extractContent(line) << '\n';
            }
            else if (startsWith(line, "\\subsubparagraph{")) {
                closeItemizeLevels(output, 3);
                if (itemizeLevels.empty() || itemizeLevels.top() < 3) {
                    output << std::string(indent, ' ') << getIndent(2) << "\\begin{itemize}\n";
                    itemizeLevels.push(3);
                }
                output << std::string(indent, ' ') << getIndent(3) << "\\item " 
                      << extractContent(line) << '\n';
            }
            else {

                output << std::string(indent, ' ') << getIndent(itemizeLevels.empty() ? 0 : itemizeLevels.top()) 
                      << line << '\n';
            }
        }

        closeItemizeLevels(output);
        return output.str();
    }
};

int main() {
    std::string input;
    std::string line;

    while (std::getline(std::cin, line)) {
        input += line + '\n';
    }
    
    LatexTransformer transformer;
    std::cout << transformer.transform(input);
    
    return 0;
}