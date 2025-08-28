# LaTeX-ToolKit

This repository contains a comprehensive and customizable LaTeX [template](#template), [LaTeX Tips.md](LaTeX%Tips.md), and other [utilities](#utilities).

## Template

To use the template, please:

<ol>
<li>Download <a href="template.tex"><code>template.tex</code></a> from here. You can clone this repository to <code>/usr/share</code> (default path in <a href="document.tex"><code>document.tex</code></a>)  with (<a href="https://git-scm.com/downloads"><code>git</code></a> required):
<pre><code>
cd /usr/share
sudo git clone https://github.com/Willie169/LaTeX-ToolKit
</code></pre>
so that you can update with:
<pre><code>
sudo git pull
</code></pre></li>
<li>Prepare <code>physics-patch</code> package. Since the <code>physics-patch</code> package is relatively new and is updated frequently, you may get it by (<a href="https://www.gnu.org/software/wget"><code>wget</code></a> required):
<pre><code>mkdir -p $(kpsewhich -var-value TEXMFHOME)/tex/latex/physics-patch
cd $(kpsewhich -var-value TEXMFHOME)/tex/latex/physics-patch
wget https://raw.githubusercontent.com/Willie169/physics-patch/main/physics-patch.sty
</code></pre></li>
<li>Copy <a href="document.tex"><code>document.tex</code></a> to your LaTeX file.</li>
<li>Configure the counters, options, and paths.</li>
<li>Customize the <a href="template.tex"><code>template.tex</code></a> (for advanced users).</li>
</ol>

Features of the template:

* Designed for LuaTeX and XeTeX, former with `luaotfload` and `luatexja-fontspec` if CJK is set, latter with `xeCJK` if CJK is set.
* Support for TC (Traditional Chinese Taiwan), SC (Simplified Chinese), HK (Traditional Chinese Hong Kong), JP (Japanese), KR (Korean), and Latin-script languages.
* Default fonts settings with TeX Gyre, Noto CJK, and XITS Math.
* Utilizes a broad range of packages such as `etoolbox`, `xparse`, `titlesec`, `titling`, `setspace`, `needspace`, `titletoc`, `amsmath`, `float`, `chemfig`, `listings`, `siunitx`, `tikz`, `circuitikz`, `mhchem`, `hyperref`, `tcolorbox`, `unicode-math`, and `markdown`.
* Defines a lot of useful commands and shorthands.
* Use my [`physics-patch`](https://github.com/Willie169/physics-patch) package to replace the [`physics`](https://ctan.org/pkg/physics) package.

You can use your own fonts by setting `Fonts`, `CJKFonts`, and `NotoCJKFamily` to `0` and changing the definition of `\SetMathFont`. To use the default fonts settings in the template, you'll need TeX Gyre, Noto CJK, and XITS Math fonts, which can installed with the Shell script below (`wget` required):

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

## Utilities

- [`paragraph2itemize.cpp`](paragraph2itemize.cpp): transforms LaTeX code in `\paragraph{}`, `\subparagraph{}`, `\subsubparagraph{}` style to nested `itemize` with indentation.
- [`xeCJK.cpp`](xeCJK.cpp) and [`luatexja.cpp`](luatexja.cpp): generates the LaTeX code for CJK fonts settings for xeCJK and luatexja-fontspec respectively. Their ouputs are used in [`template.tex`](template.tex).
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

- **Alif Type**/**aliftype**
  - URL: <https://github.com/aliftype/xits>
  - License: OFL-1.1
- **Calculus Knight** & **egreg**
  - URL: <https://tex.stackexchange.com/questions/292512/csvsimple-csvautotabular-and-csvautobooktabular-with-centered-columns-content>
  - License: CC BY-SA 3.0
- **ChatGPT**
  - URL: <https://openai.com/chatgpt>
  - License: All content generated by ChatGPT is used in accordance with [OpenAI's Terms of Use](https://openai.com/policies/terms-of-use) and released under the same terms as the rest of the project.
- **Comprehensive TeX Archive Network**
  - URL: <https://ctan.org>
  - License: Please see <https://ctan.org/license>
- **citsahcots** & **Generic Account**
  - URL: <https://tex.stackexchange.com/questions/606363/how-to-offset-one-end-of-a-bond-in-chemfig>
  - License: CC BY-SA 4.0
- **David Carlisle**
  - URL: <https://tex.stackexchange.com/questions/720573/latex2e-2024-06-01-conflict-with-arydshln-package>
  - License: CC BY-SA 4.0
- **David Carlisle**, **gablin**, **Joseph Wright**, & **egreg**
  - URL: <https://tex.stackexchange.com/questions/27592/ifmmode-doesnt-seem-to-work-correctly-inside-an-array-environment>
  - License: CC BY-SA 3.0
- **egreg**
  - URL: <https://tex.stackexchange.com/questions/426366/change-arrow-tip-of-overleftarrow-command>
  - License: CC BY-SA 3.0
- **egreg**
  - URL: <https://tex.stackexchange.com/questions/248285/arrows-in-superscripts/248297#248297>
  - License: CC BY-SA 3.0
- **Henri Menke**
  - URL: <https://tex.stackexchange.com/questions/470819/macros-dv-and-pdv-eat-the-subsequent-parenthesis-argument>
  - License: CC BY-SA 4.0
- **leandriis**
  - URL: <https://tex.stackexchange.com/questions/645814/booktabs-and-arydshln-conflict>
  - License: CC BY-SA 4.0
- **Martin Tapankov**, **David Carlisle**, **Community **, & **doncherry**
  - URL: <https://tex.stackexchange.com/questions/7032/good-way-to-make-textcircled-numbers>
  - License: CC BY-SA 3.0
- **Martin Tapankov**, **David Carlisle**, **Jimi Oke**, **Community **, & **Stefan Kottwitz**
  - URL: <https://tex.stackexchange.com/questions/7032/good-way-to-make-textcircled-numbers>
  - License: CC BY-SA 2.5
- **Michael Ummels**
  - URL: <https://tex.stackexchange.com/questions/22100/the-bar-and-overline-commands>
  - License: CC BY-SA 3.0
- **Noto Fonts**/**notofonts**
  - URL: <https://github.com/notofonts/noto-cjk>
  - License: OFL-1.1
- **Sergio C. de la Barrera**
  - URL: <https://ctan.org/pkg/physics>
  - License: LPPL-1.3
- **Stack Exchange Inc**
  - URL: <https://tex.stackexchange.com/help/licensing>
  - License: CC BY-SA 4.0
- **TeX Live**
  - URL: <https://tug.org/texlive>
  - License: Please see <https://www.tug.org/texlive/copying.html>
- **Vít Starý Novotný**/**Witiko**
  - URL: <https://github.com/Witiko/markdown>
  - License: LPPL-1.3c
- **yo'**
  - URL: <https://tex.stackexchange.com/questions/48753/obtaining-the-default-section-spacing-into-the-titlespacing-parameters>
  - License: CC BY-SA 3.0

All external materials are used in accordance with their respective copyright terms.
