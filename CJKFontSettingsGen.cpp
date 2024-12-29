#include<iostream>
#include<string>
#include <algorithm>
#include <cctype>
using namespace std;
class Latex {
public:
Latex() {}
const string cmain = "\\setCJKmainfont";
const string csans = "\\setCJKsansfont";
const string cmono = "\\setCJKmonofont";
const string nff = "\\newfontfamily\\";
const string path = "Path=/usr/share/fonts/noto-cjk/,";
const string sansf = "NotoSans";
const string seriff = "NotoSerif";
const string monof = "NotoSansMonoCJK";
const string otf = ".otf";
const string cf = "\\ifnum\\value{CJKFonts}=";
const string cl  ="\\ifnum\\value{CJKLanguage}=";
const string cn = "\\ifnum\\value{NotoCJKFamily}=";
const string el = "\\else";
const string cp = "}[";
const string end = "Ligatures=TeX]";
const string pre = "\\ifnum\\value{xeCJK}=1\n\\usepackage[CJKspace]{xeCJK}\n\\usepackage{zhnumber}\n\\ifnum\\value{ZhRenew}=1\n\\renewcommand{\\contentsname}{\\hfill\\text{目錄}\\hfill}\n\\else\\ifnum\\value{ZhRenew}=2\n\\renewcommand{\\contentsname}{\\hfill\\text{目录}\\hfill}\n\\fi\\fi\n\\ifnum\\value{CJKFonts}=0\\else\n";
string ulang[5]={"TC","SC","HK","JP","KR"};
string llang[5]={"tc","sc","hk","jp","kr"};
string fw[5]={"UprightFont","ItalicFont","BoldFont","BoldItalicFont","SmallCapsFont"};
string sansw[5]={"Regular","Medium","Bold","Black","DemiLight"};
string serifw[5]={"Regular","Medium","Bold","Black","Light"};
string monofwn[2]={"UprightFont","BoldFont"};
string monow[2]={"Regular","Bold"};
string sans(string lang){
  string ret="{"+sansf+lang+cp+path;
  for (int i=0; i<5; i++) ret+=fw[i]+"="+sansf+lang+"-"+sansw[i]+otf+",";
  ret+=end;
  return ret;
}
string serif(string lang){
  string ret="{"+seriff+lang+cp+path;
  for (int i=0; i<5; i++) ret+=fw[i]+"="+seriff+lang+"-"+serifw[i]+otf+",";
  ret+=end;
  return ret;
}
string mono(string lang){
  string ret="{"+monof+lang+cp+path;
  for (int i=0; i<2; i++) ret+=monofwn[i]+"="+monof+lang+"-"+monow[i]+otf+",";
  ret+=end;
  return ret;
}
string ssans(string lang){
  string ret="Sans"+lang+"{"+sansf+lang+cp+path;
  for (int i=0; i<5; i++) ret+=fw[i]+"="+sansf+lang+"-"+sansw[i]+otf+",";
  ret+=end;
  return ret;
}
string sserif(string lang){
  string ret="Serif"+lang+"{"+seriff+lang+cp+path;
  for (int i=0; i<5; i++) ret+=fw[i]+"="+seriff+lang+"-"+serifw[i]+otf+",";
  ret+=end;
  return ret;
}
string lsans(string lang){
  string ret=lang+"{"+sansf+lang+cp+path;
  for (int i=0; i<5; i++) ret+=fw[i]+"="+sansf+lang+"-"+sansw[i]+otf+",";
  ret+=end;
  return ret;
}
string lserif(string lang){
  string ret=lang+"{"+seriff+lang+cp+path;
  for (int i=0; i<5; i++) ret+=fw[i]+"="+seriff+lang+"-"+serifw[i]+otf+",";
  ret+=end;
  return ret;
}
string smono(string ulang){
  string lang = ulang;
  transform(lang.begin(), lang.end(), lang.begin(), [](unsigned char c) { return tolower(c); });
  string ret="Mono"+ulang+"{"+monof+lang+cp+path;
  for (int i=0; i<2; i++) ret+=monofwn[i]+"="+monof+lang+"-"+monow[i]+otf+",";
  ret+=end;
  return ret;
}
void yes() {
  cout << pre;
  for (int i=0; i<5; i++) {
    cout << cl+to_string(i)+"\n";
    cout << cf+"1"+"\n";
    cout << cmain << sans(ulang[i]);
    cout << csans << serif(ulang[i]);
    cout << cmono << mono(llang[i]);
    cout << "\n\\else";
    cout << cf+"2"+"\n";
    cout << cmain << serif(ulang[i]);
    cout << csans << sans(ulang[i]);
    cout << cmono << mono(llang[i]);
    cout << "\n\\else";
    cout << cf+"3"+"\n";
    cout << cmain << sans(ulang[i]);
    cout << cmono << mono(llang[i]);
    cout << "\n\\else";
    cout << cf+"4"+"\n";
    cout << cmain << serif(ulang[i]);
    cout << cmono << mono(llang[i]);
    cout << "\n\\else";
    cout << cf+"5"+"\n";
    cout << cmain << sans(ulang[i]);
    cout << csans << serif(ulang[i]);
    cout << "\n\\else";
    cout << cf+"6"+"\n";
    cout << cmain << serif(ulang[i]);
    cout << csans << sans(ulang[i]);
    cout << "\n\\else";
    cout << cf+"7"+"\n";
    cout << cmain << sans(ulang[i]);
    cout << "\n\\else";
    cout << cf+"8"+"\n";
    cout << cmain << serif(ulang[i]);
    cout << "\n\\fi\\fi\\fi\\fi\\fi\\fi\\fi\\fi";
    if (i!=4) cout << "\\else\n";
  }
  cout << "\n\\fi\\fi\\fi\\fi\\fi\\fi\n";
  cout << cn << "0\n";
  cout << "\\else" << cn << "1";
  for (int i=0; i<5; i++) {
    cout << "\n" << nff << ssans(ulang[i]);
    cout << "\n" << nff << lsans(ulang[i]);
    cout << "\n" << nff << sserif(ulang[i]);
    cout << "\n" << nff << smono(ulang[i]);
  }
  cout << "\\else" << cn << "2";
  for (int i=0; i<5; i++) {
    cout << "\n" << nff << ssans(ulang[i]);
    cout << "\n" << nff << sserif(ulang[i]);
    cout << "\n" << nff << lserif(ulang[i]);
    cout << "\n" << nff << smono(ulang[i]);
  }
  cout << "\\else" << cn << "3";
  for (int i=0; i<5; i++) {
    cout << "\n" << nff << ssans(ulang[i]);
    cout << "\n" << nff << sserif(ulang[i]);
    cout << "\n" << nff << smono(ulang[i]);
  }
  cout << "\\else" << cn << "4";
  for (int i=0; i<5; i++) {
    cout << "\n" << nff << ssans(ulang[i]);
    cout << "\n" << nff << lsans(ulang[i]);
    cout << "\n" << nff << sserif(ulang[i]);
  }
  cout << "\\else" << cn << "5";
  for (int i=0; i<5; i++) {
    cout << "\n" << nff << ssans(ulang[i]);
    cout << "\n" << nff << sserif(ulang[i]);
    cout << "\n" << nff << lserif(ulang[i]);
  }
  cout << "\\else" << cn << "6";
  for (int i=0; i<5; i++) {
    cout << "\n" << nff << ssans(ulang[i]);
    cout << "\n" << nff << sserif(ulang[i]);
  }
  cout << "\n\\fi\\fi\\fi\\fi\\fi\\fi\\fi\\fi";
}
};
int main() {
  Latex latex=Latex();
  latex.yes();
  return 0;
}