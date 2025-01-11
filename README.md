# LaTeX-ToolKit

## Introduction

This repository contains
- [`template.tex`](template.tex) and [`document.tex`](document.tex): a comprehensive and customizable LaTeX template designed for LuaTeX and XeTeX with support of TC (Traditional Chinese Taiwan), SC (Simplified Chinese), HK (Traditional Chinese Hong Kong), JP (Japanese), KR (Korean), and Latin-script languages, TeX Gyre, Noto CJK, and XITS Math fonts, a broad range of packages, and a lot of useful commands and shorthands.
- [LaTeX Best Practices.md](LaTeX%20Best%20Practices.md): some best practices of LaTeX.
- Other [utilities](#utilities).

## Fonts

Fonts can be installed with the Shell script below (`wget` required):

```
mkdir /usr/share/fonts/opentype/xits
cd /usr/share/fonts/opentype/xits
wget https://github.com/aliftype/xits/releases/download/v1.302/XITS-1.302.zip
unzip XITS-1.302.zip
cd XITS-1.302
mv *.otf ..
cd ..
rm -rf XITS-1.302*
mkdir /usr/share/fonts/noto-cjk
cd /usr/share/fonts/noto-cjk
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Thin.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Regular.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Medium.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Light.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-DemiLight.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Bold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Black.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Thin.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Regular.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Medium.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Light.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-DemiLight.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Bold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Black.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Thin.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Regular.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Medium.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Light.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-DemiLight.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Bold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Black.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Thin.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Regular.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Medium.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Light.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-DemiLight.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Bold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Black.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Thin.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Regular.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Medium.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Light.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-DemiLight.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Bold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Black.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-ExtraLight.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-Regular.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-Medium.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-Light.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-SemiBold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-Bold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-Black.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-ExtraLight.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-Regular.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-Medium.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-Light.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-SemiBold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-Bold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-Black.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-ExtraLight.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-Regular.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-Medium.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-Light.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-SemiBold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-Bold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-Black.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-ExtraLight.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-Regular.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-Medium.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-Light.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-SemiBold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-Bold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-Black.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-ExtraLight.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-Regular.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-Medium.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-Light.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-SemiBold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-Bold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-Black.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKtc-Regular.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKtc-Bold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKsc-Regular.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKsc-Bold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKhk-Regular.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKhk-Bold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKjp-Regular.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKjp-Bold.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKkr-Regular.otf
wget https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKkr-Bold.otf
fc-cache -fv
```

## Template

- Configure counters in [`document.tex`](document.tex).
- Replace the `/usr/share/latex-toolkit/template.tex` in `\input{/usr/share/latex-toolkit/template.tex}` line in [`document.tex`](document.tex) with the actual path you downloaded the [`template.tex`](template.tex).
- Customize [`template.tex`](template.tex), advanced users only.

## Utilities

- [`xeCJK.cpp`](xeCJK.cpp) and [`luatexja.cpp`](luatexja.cpp): generates the LaTeX code for CJK fonts settings for xeCJK and luatexja-fontspec respectively. Their ouputs are used in [`template.tex`](template.tex).
- [`paragraph2itemize.cpp`](paragraph2itemize.cpp): transforms LaTeX code in `\paragraph{}`, `\subparagraph{}`, `\subsubparagraph{}` style to nested `itemize` with indentation.
- [`test.tex`](test.tex): test.
- [`lua_test.pdf`](test.pdf): PDF compiled with `lualatex test.tex`.
- [`xe_test.pdf`](test.pdf): PDF compiled with `xelatex test.tex`.

## License

This project is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 

This project is licensed under the terms of either:

- The GNU General Public License v3.0 or later (GPL-3.0-or-later): [gpl.md](LICENSE/gpl.md).
- The Creative Commons Attribution-ShareAlike 4.0 International License or later (CC-BY-SA-4.0-or-later): [CC-BY-SA-4.0.html](LICENSE/CC-BY-SA-4.0.html).
- The LaTeX Project Public License Version 1.3c or later (LPPL-1.3c-or-later): [lppl.txt](LICENSE/lppl.txt).

By contributing to this project, you agree that your contributions will be licensed under GPL-3.0-or-later, CC-BY-SA-4.0-or-later, and LPPL-1.3c-or-later.

## Sources and Credits

This project incorporates materials from the following sources:

1. **egreg**
   - **URL:** [https://tex.stackexchange.com/questions/426366/change-arrow-tip-of-overleftarrow-command](https://tex.stackexchange.com/questions/426366/change-arrow-tip-of-overleftarrow-command)
   - **License:** CC BY-SA 3.0

2. **egreg**
   - **URL:** [https://tex.stackexchange.com/questions/248285/arrows-in-superscripts/248297#248297](https://tex.stackexchange.com/questions/248285/arrows-in-superscripts/248297#248297)
   - **License:** CC BY-SA 3.0

3. **citsahcots** & **Generic Account**
   - **URL:** [https://tex.stackexchange.com/questions/606363/how-to-offset-one-end-of-a-bond-in-chemfig](https://tex.stackexchange.com/questions/606363/how-to-offset-one-end-of-a-bond-in-chemfig)
   - **License:** CC BY-SA 4.0

4. **Calculus Knight** & **egreg**
   - **URL:** [https://tex.stackexchange.com/questions/292512/csvsimple-csvautotabular-and-csvautobooktabular-with-centered-columns-content](https://tex.stackexchange.com/questions/292512/csvsimple-csvautotabular-and-csvautobooktabular-with-centered-columns-content)
   - **License:** CC BY-SA 3.0

5. **yo'**
   - **URL:** [https://tex.stackexchange.com/questions/48753/obtaining-the-default-section-spacing-into-the-titlespacing-parameters](https://tex.stackexchange.com/questions/48753/obtaining-the-default-section-spacing-into-the-titlespacing-parameters)
   - **License:** CC BY-SA 3.0

6. **Martin Tapankov**, **David Carlisle**, **Jimi Oke**, **Community (Bot)** & **Stefan Kottwitz**
   - **URL:** [https://tex.stackexchange.com/questions/7032/good-way-to-make-textcircled-numbers](https://tex.stackexchange.com/questions/7032/good-way-to-make-textcircled-numbers)
   - **License:** CC BY-SA 2.5

7. **Martin Tapankov**, **David Carlisle**, **Community (Bot)** & **doncherry**
   - **URL:** [https://tex.stackexchange.com/questions/7032/good-way-to-make-textcircled-numbers](https://tex.stackexchange.com/questions/7032/good-way-to-make-textcircled-numbers)
   - **License:** CC BY-SA 3.0

8. **ButTaiwan**
   - **URL:** [https://github.com/ButTaiwan/iansui](https://github.com/ButTaiwan/iansui)
   - **License:** SIL Open Font License 1.1

9. **Alif Type**
   - **URL:** [https://github.com/aliftype/xits](https://github.com/aliftype/xits)
   - **License:** SIL Open Font License 1.1

10. **ChatGPT**
    - **URL:** [https://openai.com/chatgpt/](https://openai.com/chatgpt/)
    - **License:** All content generated by ChatGPT is used in accordance with [OpenAI's Terms of Use](https://openai.com/policies/terms-of-use) and released under the same terms as the rest of the project.

All external materials are used in accordance with their respective licenses.
