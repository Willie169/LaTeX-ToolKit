#include <stdio.h>

int main() {
    char array[52];
    char i = 0;
    for (char c = 'A'; c <= 'Z'; c++) array[i++] = c;
    for (char c = 'a'; c <= 'z'; c++) array[i++] = c;
    for (int j = 0; j < 52; j++) {
        printf("\\ProvideDocumentCommand{\\tx%c}{}{\\text{%c}}\n\\ProvideDocumentCommand{\\rm%c}{}{\\relax\\ifmmode\\mathrm{%c}\\else\\text{\\(\\mathrm{%c}\\)}\\fi}\n", array[j], array[j], array[j], array[j], array[j]);
        for (int k = 0; k < 52; k++) printf("\\ProvideDocumentCommand{\\tx%c%c}{}{\\text{%c%c}}\n\\ProvideDocumentCommand{\\rm%c%c}{}{\\relax\\ifmmode\\mathrm{%c%c}\\else\\text{\\(\\mathrm{%c%c}\\)}\\fi}\n", array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k], array[j], array[k]);
    }
}
