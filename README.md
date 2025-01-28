<!-- This is README.md of https://github.com/Willie169/LaTeX-ToolKit, licensed under either GPL-3.0-or-later, CC BY-SA 4.0-or-later, or LPPL-1.3c-or-later. -->
# LaTeX-ToolKit

## Introduction

This repository contains
- [`template.tex`](template.tex) and [`document.tex`](document.tex): a comprehensive and customizable LaTeX template designed for LuaTeX and XeTeX with support of TC (Traditional Chinese Taiwan), SC (Simplified Chinese), HK (Traditional Chinese Hong Kong), JP (Japanese), KR (Korean), and Latin-script languages, TeX Gyre, Noto CJK, and XITS Math fonts, a broad range of packages, and a lot of useful commands and shorthands.
- [LaTeX Best Practices.md](LaTeX%20Best%20Practices.md): some best practices of LaTeX.
- Other [utilities](#utilities).

## Fonts

Fonts can be installed with the Shell script below (`wget` required):

```
sudo mkdir /usr/share/fonts/opentype/xits
cd /usr/share/fonts/opentype/xits
sudo wget https://github.com/aliftype/xits/releases/download/v1.302/XITS-1.302.zip
sudo unzip XITS-1.302.zip
cd XITS-1.302
sudo mv *.otf ..
cd ..
sudo rm -rf XITS-1.302*
sudo mkdir /usr/share/fonts/noto-cjk
cd /usr/share/fonts/noto-cjk
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Thin.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Regular.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Medium.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Light.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-DemiLight.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Bold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Black.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Thin.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Regular.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Medium.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Light.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-DemiLight.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Bold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Black.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Thin.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Regular.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Medium.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Light.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-DemiLight.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Bold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Black.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Thin.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Regular.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Medium.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Light.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-DemiLight.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Bold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Black.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Thin.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Regular.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Medium.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Light.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-DemiLight.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Bold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Black.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-ExtraLight.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-Regular.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-Medium.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-Light.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-SemiBold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-Bold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-Black.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-ExtraLight.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-Regular.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-Medium.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-Light.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-SemiBold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-Bold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-Black.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-ExtraLight.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-Regular.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-Medium.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-Light.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-SemiBold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-Bold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-Black.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-ExtraLight.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-Regular.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-Medium.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-Light.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-SemiBold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-Bold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-Black.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-ExtraLight.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-Regular.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-Medium.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-Light.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-SemiBold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-Bold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-Black.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKtc-Regular.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKtc-Bold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKsc-Regular.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKsc-Bold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKhk-Regular.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKhk-Bold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKjp-Regular.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKjp-Bold.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKkr-Regular.otf
sudo wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKkr-Bold.otf
sudo fc-cache -fv
```

## Template

- Configure counters in [`document.tex`](document.tex).
- Replace the `/usr/share/latex-toolkit/template.tex` in `\input{/usr/share/latex-toolkit/template.tex}` line in [`document.tex`](document.tex) with the actual path you downloaded the [`template.tex`](template.tex).
- Customize [`template.tex`](template.tex), advanced users only.

## Utilities

- [`paragraph2itemize.cpp`](paragraph2itemize.cpp): transforms LaTeX code in `\paragraph{}`, `\subparagraph{}`, `\subsubparagraph{}` style to nested `itemize` with indentation.
- [`xeCJK.cpp`](xeCJK.cpp) and [`luatexja.cpp`](luatexja.cpp): generates the LaTeX code for CJK fonts settings for xeCJK and luatexja-fontspec respectively. Their ouputs are used in [`template.tex`](template.tex).
- [`alphabet.c`](alphabet.c): generates the LaTeX code for `\text` and `\mathrm` alphabet letters shorthands.
- [`test.tex`](test.tex): test.
- [`lua_test.pdf`](test.pdf): PDF compiled with `lualatex test.tex`.
- [`xe_test.pdf`](test.pdf): PDF compiled with `xelatex test.tex`.

## License

This project is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 

This project, except for parts incorporated from other sources that are licenced under different copyright terms, which are listed in [Sources and Credits](#sources-and-credits) section, is licensed under the terms of either:

- The GNU General Public License v3.0 or later (GPL-3.0-or-later): [gpl.md](LICENSE/gpl.md)
- The Creative Commons Attribution-ShareAlike 4.0 International License or later (CC-BY-SA-4.0-or-later): [CC-BY-SA-4.0.html](LICENSE/CC-BY-SA-4.0.html)
- The LaTeX Project Public License Version 1.3c or later (LPPL-1.3c-or-later): [lppl.txt](LICENSE/lppl.txt)

By contributing to this project, you agree that your contributions will be licensed under GPL-3.0-or-later, CC-BY-SA-4.0-or-later, and LPPL-1.3c-or-later.

## Sources and Credits

1. **egreg**
  - **URL:** [https://tex.stackexchange.com/questions/426366/change-arrow-tip-of-overleftarrow-command](https://tex.stackexchange.com/questions/426366/change-arrow-tip-of-overleftarrow-command)
  - **Copyright Terms:** CC BY-SA 3.0

2. **egreg**
  - **URL:** [https://tex.stackexchange.com/questions/248285/arrows-in-superscripts/248297#248297](https://tex.stackexchange.com/questions/248285/arrows-in-superscripts/248297#248297)
  - **Copyright Terms:** CC BY-SA 3.0

2. **citsahcots** & **Generic Account**
  - **URL:** [https://tex.stackexchange.com/questions/606363/how-to-offset-one-end-of-a-bond-in-chemfig](https://tex.stackexchange.com/questions/606363/how-to-offset-one-end-of-a-bond-in-chemfig)
  - **Copyright Terms:** CC BY-SA 4.0

2. **Calculus Knight** & **egreg**
  - **URL:** [https://tex.stackexchange.com/questions/292512/csvsimple-csvautotabular-and-csvautobooktabular-with-centered-columns-content](https://tex.stackexchange.com/questions/292512/csvsimple-csvautotabular-and-csvautobooktabular-with-centered-columns-content)
  - **Copyright Terms:** CC BY-SA 3.0

2. **yo'**
  - **URL:** [https://tex.stackexchange.com/questions/48753/obtaining-the-default-section-spacing-into-the-titlespacing-parameters](https://tex.stackexchange.com/questions/48753/obtaining-the-default-section-spacing-into-the-titlespacing-parameters)
  - **Copyright Terms:** CC BY-SA 3.0

2. **Martin Tapankov**, **David Carlisle**, **Jimi Oke**, **Community (Bot)**, & **Stefan Kottwitz**
  - **URL:** [https://tex.stackexchange.com/questions/7032/good-way-to-make-textcircled-numbers](https://tex.stackexchange.com/questions/7032/good-way-to-make-textcircled-numbers)
  - **Copyright Terms:** CC BY-SA 2.5

2. **Martin Tapankov**, **David Carlisle**, **Community (Bot)**, & **doncherry**
  - **URL:** [https://tex.stackexchange.com/questions/7032/good-way-to-make-textcircled-numbers](https://tex.stackexchange.com/questions/7032/good-way-to-make-textcircled-numbers)
  - **Copyright Terms:** CC BY-SA 3.0

2. **David Carlisle**, **gablin**, **Joseph Wright**, & **egreg**
  - **URL:** [https://tex.stackexchange.com/questions/27592/ifmmode-doesnt-seem-to-work-correctly-inside-an-array-environment](https://tex.stackexchange.com/questions/27592/ifmmode-doesnt-seem-to-work-correctly-inside-an-array-environment)
  - **Copyright Terms:** CC BY-SA 3.0

2. **Michael Ummels**
  - **URL:** [https://tex.stackexchange.com/questions/22100/the-bar-and-overline-commands](https://tex.stackexchange.com/questions/22100/the-bar-and-overline-commands)
  - **Copyright Terms:** CC BY-SA 3.0
  
2. **Noto Fonts**/**notofonts**
  - **URL:** [https://github.com/notofonts/noto-cjk](https://github.com/notofonts/noto-cjk)
  - **Copyright Terms:** OFL-1.1

2. **Alif Type (<div dir="rtl">حروف ألف</div>)**/**aliftype**
  - **URL:** [https://github.com/aliftype/xits](https://github.com/aliftype/xits)
  - **Copyright Terms:** OFL-1.1

2. **TeX Live**
  - **URL:** [https://tug.org/texlive](https://tug.org/texlive)
  - **Copyright Terms:** Please see [https://www.tug.org/texlive/copying.html](https://www.tug.org/texlive/copying.html)

2. **Comprehensive TeX Archive Network (CTAN)**
  - **URL:** [https://ctan.org](https://ctan.org)
  - **Copyright Terms:** Please see [https://ctan.org/license](https://ctan.org/license)

2. **Vít Starý Novotný**/**Witiko**
  - **URL:** [https://github.com/Witiko/markdown](https://github.com/Witiko/markdown)
  - **Copyright Terms:** LPPL-1.3c

2. **ChatGPT**
  - **URL:** [https://openai.com/chatgpt/](https://openai.com/chatgpt/)
  - **Copyright Terms:** All content generated by ChatGPT is used in accordance with [OpenAI's Terms of Use](https://openai.com/policies/terms-of-use) and released under the same terms as the rest of the project.

All external materials are used in accordance with their respective copyright terms.
