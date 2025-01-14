#include <stdio.h>

int main() {
    char array[52];
    char i = 0;
    for (char c = 'A'; c <= 'Z'; c++) array[i++] = c;
    for (char c = 'a'; c <= 'z'; c++) array[i++] = c;
    for (int j = 0; j < 52; j++) {
        printf("\\ProvideDocumentCommand{\\tx%c}{O{}}{\\text{%c}}\n\\ProvideDocumentCommand{\\tb%c}{O{}}{\\textbf{%c}}\n\\ProvideDocumentCommand{\\ti%c}{O{}}{\\textit{%c}}\n\\ProvideDocumentCommand{\\bf%c}{O{}}{\\relax\\ifmmode\\mathbf{%c}\\else\\text{\\(\\mathbf{%c}\\)}\\fi}\n\\ProvideDocumentCommand{\\it%c}{O{}}{\\relax\\ifmmode\\mathit{%c}\\else\\text{\\(\\mathit{%c}\\)}\\fi}\n\\ProvideDocumentCommand{\\rm%c}{O{}}{\\relax\\ifmmode\\mathrm{%c}\\else\\text{\\(\\mathrm{%c}\\)}\\fi}\n", array[j], array[j], array[j], array[j], array[j], array[j], array[j], array[j], array[j], array[j], array[j], array[j], array[j], array[j], array[j]);
        for (int k = 0; k < 52; k++) printf("\\ProvideDocumentCommand{\\tx%c%c}{O{}}{\\text{%c%c}}\n\\ProvideDocumentCommand{\\tb%c%c}{O{}}{\\textbf{%c%c}}\n\\ProvideDocumentCommand{\\ti%c%c}{O{}}{\\textit{%c%c}}\n\\ProvideDocumentCommand{\\bf%c%c}{O{}}{\\relax\\ifmmode\\mathbf{%c%c}\\else\\text{\\(\\mathbf{%c%c}\\)}\\fi}\n\\ProvideDocumentCommand{\\it%c%c}{O{}}{\\relax\\ifmmode\\mathit{%c%c}\\else\\text{\\(\\mathit{%c%c}\\)}\\fi}\n\\ProvideDocumentCommand{\\rm%c%c}{O{}}{\\relax\\ifmmode\\mathrm{%c%c}\\else\\text{\\(\\mathrm{%c%c}\\)}\\fi}\n", array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k]);
    }
}
