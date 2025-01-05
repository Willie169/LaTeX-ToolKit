# LaTeX-ToolKit

## Introduction

This repository boasts a comprehensive and customizable LaTeX template, [`template.tex`](template.tex), which is designed for article or report documentclass, TC (Traditional Chinese Taiwan), SC (Simplified Chinese), HK (Traditional Chinese Hong Kong), JP (Japanese), KR (Korean), and Latin-script languages, and with many commands and shorthands defined.

## Fonts

Fonts can be installed with:

```
mkdir -p /usr/share/fonts/opentype/stix
curl https://raw.githubusercontent.com/stipub/stixfonts/master/fonts/static_otf/STIXTwoMath-Regular.otf --output /usr/share/fonts/opentype/stix/STIXTwoMath-Regular.otf
mkdir /usr/share/fonts/noto-cjk
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Thin.otf --output /usr/share/fonts/noto-cjk/NotoSansTC-Thin.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Regular.otf --output /usr/share/fonts/noto-cjk/NotoSansTC-Regular.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Medium.otf --output /usr/share/fonts/noto-cjk/NotoSansTC-Medium.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Light.otf --output /usr/share/fonts/noto-cjk/NotoSansTC-Light.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-DemiLight.otf --output /usr/share/fonts/noto-cjk/NotoSansTC-DemiLight.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Bold.otf --output /usr/share/fonts/noto-cjk/NotoSansTC-Bold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/TC/NotoSansTC-Black.otf --output /usr/share/fonts/noto-cjk/NotoSansTC-Black.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Thin.otf --output /usr/share/fonts/noto-cjk/NotoSansSC-Thin.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Regular.otf --output /usr/share/fonts/noto-cjk/NotoSansSC-Regular.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Medium.otf --output /usr/share/fonts/noto-cjk/NotoSansSC-Medium.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Light.otf --output /usr/share/fonts/noto-cjk/NotoSansSC-Light.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-DemiLight.otf --output /usr/share/fonts/noto-cjk/NotoSansSC-DemiLight.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Bold.otf --output /usr/share/fonts/noto-cjk/NotoSansSC-Bold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/SC/NotoSansSC-Black.otf --output /usr/share/fonts/noto-cjk/NotoSansSC-Black.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Thin.otf --output /usr/share/fonts/noto-cjk/NotoSansHK-Thin.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Regular.otf --output /usr/share/fonts/noto-cjk/NotoSansHK-Regular.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Medium.otf --output /usr/share/fonts/noto-cjk/NotoSansHK-Medium.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Light.otf --output /usr/share/fonts/noto-cjk/NotoSansHK-Light.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-DemiLight.otf --output /usr/share/fonts/noto-cjk/NotoSansHK-DemiLight.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Bold.otf --output /usr/share/fonts/noto-cjk/NotoSansHK-Bold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/HK/NotoSansHK-Black.otf --output /usr/share/fonts/noto-cjk/NotoSansHK-Black.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Thin.otf --output /usr/share/fonts/noto-cjk/NotoSansJP-Thin.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Regular.otf --output /usr/share/fonts/noto-cjk/NotoSansJP-Regular.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Medium.otf --output /usr/share/fonts/noto-cjk/NotoSansJP-Medium.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Light.otf --output /usr/share/fonts/noto-cjk/NotoSansJP-Light.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-DemiLight.otf --output /usr/share/fonts/noto-cjk/NotoSansJP-DemiLight.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Bold.otf --output /usr/share/fonts/noto-cjk/NotoSansJP-Bold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/JP/NotoSansJP-Black.otf --output /usr/share/fonts/noto-cjk/NotoSansJP-Black.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Thin.otf --output /usr/share/fonts/noto-cjk/NotoSansKR-Thin.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Regular.otf --output /usr/share/fonts/noto-cjk/NotoSansKR-Regular.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Medium.otf --output /usr/share/fonts/noto-cjk/NotoSansKR-Medium.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Light.otf --output /usr/share/fonts/noto-cjk/NotoSansKR-Light.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-DemiLight.otf --output /usr/share/fonts/noto-cjk/NotoSansKR-DemiLight.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Bold.otf --output /usr/share/fonts/noto-cjk/NotoSansKR-Bold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/SubsetOTF/KR/NotoSansKR-Black.otf --output /usr/share/fonts/noto-cjk/NotoSansKR-Black.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-ExtraLight.otf --output /usr/share/fonts/noto-cjk/NotoSerifTC-ExtraLight.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-Regular.otf --output /usr/share/fonts/noto-cjk/NotoSerifTC-Regular.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-Medium.otf --output /usr/share/fonts/noto-cjk/NotoSerifTC-Medium.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-Light.otf --output /usr/share/fonts/noto-cjk/NotoSerifTC-Light.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-SemiBold.otf --output /usr/share/fonts/noto-cjk/NotoSerifTC-SemiBold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-Bold.otf --output /usr/share/fonts/noto-cjk/NotoSerifTC-Bold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/TC/NotoSerifTC-Black.otf --output /usr/share/fonts/noto-cjk/NotoSerifTC-Black.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-ExtraLight.otf --output /usr/share/fonts/noto-cjk/NotoSerifSC-ExtraLight.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-Regular.otf --output /usr/share/fonts/noto-cjk/NotoSerifSC-Regular.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-Medium.otf --output /usr/share/fonts/noto-cjk/NotoSerifSC-Medium.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-Light.otf --output /usr/share/fonts/noto-cjk/NotoSerifSC-Light.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-SemiBold.otf --output /usr/share/fonts/noto-cjk/NotoSerifSC-SemiBold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-Bold.otf --output /usr/share/fonts/noto-cjk/NotoSerifSC-Bold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/SC/NotoSerifSC-Black.otf --output /usr/share/fonts/noto-cjk/NotoSerifSC-Black.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-ExtraLight.otf --output /usr/share/fonts/noto-cjk/NotoSerifHK-ExtraLight.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-Regular.otf --output /usr/share/fonts/noto-cjk/NotoSerifHK-Regular.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-Medium.otf --output /usr/share/fonts/noto-cjk/NotoSerifHK-Medium.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-Light.otf --output /usr/share/fonts/noto-cjk/NotoSerifHK-Light.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-SemiBold.otf --output /usr/share/fonts/noto-cjk/NotoSerifHK-SemiBold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-Bold.otf --output /usr/share/fonts/noto-cjk/NotoSerifHK-Bold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/HK/NotoSerifHK-Black.otf --output /usr/share/fonts/noto-cjk/NotoSerifHK-Black.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-ExtraLight.otf --output /usr/share/fonts/noto-cjk/NotoSerifJP-ExtraLight.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-Regular.otf --output /usr/share/fonts/noto-cjk/NotoSerifJP-Regular.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-Medium.otf --output /usr/share/fonts/noto-cjk/NotoSerifJP-Medium.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-Light.otf --output /usr/share/fonts/noto-cjk/NotoSerifJP-Light.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-SemiBold.otf --output /usr/share/fonts/noto-cjk/NotoSerifJP-SemiBold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-Bold.otf --output /usr/share/fonts/noto-cjk/NotoSerifJP-Bold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/JP/NotoSerifJP-Black.otf --output /usr/share/fonts/noto-cjk/NotoSerifJP-Black.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-ExtraLight.otf --output /usr/share/fonts/noto-cjk/NotoSerifKR-ExtraLight.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-Regular.otf --output /usr/share/fonts/noto-cjk/NotoSerifKR-Regular.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-Medium.otf --output /usr/share/fonts/noto-cjk/NotoSerifKR-Medium.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-Light.otf --output /usr/share/fonts/noto-cjk/NotoSerifKR-Light.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-SemiBold.otf --output /usr/share/fonts/noto-cjk/NotoSerifKR-SemiBold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-Bold.otf --output /usr/share/fonts/noto-cjk/NotoSerifKR-Bold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Serif/SubsetOTF/KR/NotoSerifKR-Black.otf --output /usr/share/fonts/noto-cjk/NotoSerifKR-Black.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKtc-Regular.otf --output /usr/share/fonts/noto-cjk/NotoSansMonoCJKtc-Regular.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKtc-Bold.otf --output /usr/share/fonts/noto-cjk/NotoSansMonoCJKtc-Bold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKsc-Regular.otf --output /usr/share/fonts/noto-cjk/NotoSansMonoCJKsc-Regular.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKsc-Bold.otf --output /usr/share/fonts/noto-cjk/NotoSansMonoCJKsc-Bold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKhk-Regular.otf --output /usr/share/fonts/noto-cjk/NotoSansMonoCJKhk-Regular.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKhk-Bold.otf --output /usr/share/fonts/noto-cjk/NotoSansMonoCJKhk-Bold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKjp-Regular.otf --output /usr/share/fonts/noto-cjk/NotoSansMonoCJKjp-Regular.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKjp-Bold.otf --output /usr/share/fonts/noto-cjk/NotoSansMonoCJKjp-Bold.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKkr-Regular.otf --output /usr/share/fonts/noto-cjk/NotoSansMonoCJKkr-Regular.otf
curl https://raw.githubusercontent.com/notofonts/noto-cjk/main/Sans/Mono/NotoSansMonoCJKkr-Bold.otf --output /usr/share/fonts/noto-cjk/NotoSansMonoCJKkr-Bold.otf
fc-cache -fv
```

## Usage

Replace `\input{template.tex}` line in [document.tex](document.tex) with the actual path you downloaded the [template.tex](template.tex).

## Cpp programs

- [`CJKFontSettingsGen.cpp`](CJKFontSettingsGen.cpp): generates the LaTeX code for CJK fonts settings and related things. The output of it is the lines 41 to 208 of [`template.tex`](template.tex).
- [`paragraph2itemize.cpp`](paragraph2itemize.cpp): transforms LaTeX code in `\paragraph{}`, `\subparagraph{}`, `\subsubparagraph{}` style to nested `itemize` with indentation.

## License

LaTeX-ToolKit is licensed under either:

- The GNU General Public License v3.0 or later (GPL-3.0-or-later)
- The Creative Commons Attribution-ShareAlike 4.0 International License or later (CC BY-SA 4.0-or-later)

You may choose which license to apply to your use of this project. For more information, see the "LICENSE" folder.

## Development

LaTeX-ToolKit is still under development. Contributions are welcome!
