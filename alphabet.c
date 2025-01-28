// This is alphabet.c of https://github.com/Willie169/LaTeX-ToolKit, licensed under either GPL-3.0-or-later, CC BY-SA 4.0-or-later, or LPPL-1.3c-or-later.
#include <stdio.h>

int main() {
    char array[52];
    char i = 0;
    for (char c = 'A'; c <= 'Z'; c++) array[i++] = c;
    for (char c = 'a'; c <= 'z'; c++) array[i++] = c;
    for (int j = 0; j < 52; j++) {
        printf("\\ProvideDocumentCommand{\\tx%c}{O{}}{\\text{%c}}\n\\ProvideDocumentCommand{\\tb%c}{O{}}{\\textbf{%c}}\n\\ProvideDocumentCommand{\\bf%c}{O{}}{\\relax\\ifmmode\\mathbf{%c}\\else\\text{\\(\\mathbf{%c}\\)}\\fi}\n\\ProvideDocumentCommand{\\rm%c}{O{}}{\\relax\\ifmmode\\mathrm{%c}\\else\\text{\\(\\mathrm{%c}\\)}\\fi}\n", array[j], array[j], array[j], array[j], array[j], array[j], array[j], array[j], array[j], array[j]);
        for (int k = 0; k < 52; k++) printf("\\ProvideDocumentCommand{\\tx%c%c}{O{}}{\\text{%c%c}}\n\\ProvideDocumentCommand{\\tb%c%c}{O{}}{\\textbf{%c%c}}\n\\ProvideDocumentCommand{\\bf%c%c}{O{}}{\\relax\\ifmmode\\mathbf{%c%c}\\else\\text{\\(\\mathbf{%c%c}\\)}\\fi}\n\\ProvideDocumentCommand{\\rm%c%c}{O{}}{\\relax\\ifmmode\\mathrm{%c%c}\\else\\text{\\(\\mathrm{%c%c}\\)}\\fi}\n", array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k]);
    }
}
