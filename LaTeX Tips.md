<h2 id="latex-tips">LaTeX Tips</h2>
<ul>
<li>Use the <a href="https://github.com/Willie169/physics-patch"><code>physics-patch</code></a> package to replace the <a href="https://ctan.org/pkg/physics"><code>physics</code></a> package because the former resolved the unintuitive definitions and behaviors in the latter without changing the command names and intended behaviors, extended some commands, and introduced some new macros.</li>
<li>In <code>TeX</code> and <code>LaTeX</code>, the number of arguments a command can have is limited to 9. To break this limit, use the solution provided in <a href="https://texfaq.org/FAQ-moren9">https://texfaq.org/FAQ-moren9</a>:
<pre><code>
\def\blah#1#2 ... #9{%
  \def\ArgI{{#1}}%
  \def\ArgII{{#2}}%
  ...
  \def\ArgIX{{#9}}%
  \BlahRelay
}
\def\BlahRelay#1#2#3{%
  % arguments 1-9 are now in
  %   \ArgI-\ArgIX
  % arguments 10-12 are in
  %   #1-#3
  <macro body>%
}
</code></pre>
</li>
<li><code>XeTeX</code> and <code>LuaTeX</code> better support fonts, scripting, Unicode, and other compatibilities than <code>pdfTeX</code>.</li>
<li>When working <code>XeTeX</code>, use <code>fontspec</code> (and <code>xeCJK</code> for CJK support) packages to set fonts; when working <code>LuaTeX</code>, use <code>fontspec</code> and/or <code>luaotfload</code> packages to set fonts.. There is no default CJK font in both <code>XeTeX</code> and <code>LuaTeX</code> currently.</li>
<li><code>tcolorbox</code>, <code>hyperref</code>, and <code>unicode-math</code> packages should be loaded after all other packages. <code>amsmath</code> should be loaded before <code>mathtools</code>; <code>mathtools</code> should be loaded before <code>unicode-math</code>.</li>
<li>When using <code>unicode-math</code>, math fonts should only be set with <code>\setmathfont</code> instead of <code>\usepackage</code> because that will either conflict with <code>unicode-math</code> (such as when you load <code>unicode-math</code> before <code>mathalfa</code>), be overriden by <code>unicode-math</code> (such as when you load <code>unicode-math</code> after <code>mathalfa</code>), or break the font setting of <code>unicode-math</code> (such as when you load <code>euler</code> or <code>mathspec</code> with presence of <code>unicode-math</code>). Though <code>fontspec</code> is loaded automatically by <code>unicode-math</code>, it&#39;s ok and common to load it separately at beginning.</li>
<li><code>unicode-math</code> (as well as some other packages) sets <code>\mathcal</code> and <code>\mathbfcal</code> the same as <code>\mathscr</code> and <code>\mathbfscr</code>. A possible approach to set them differently is to set a different font or a different stylistic set for one of them. It is common to set <code>\mathcal</code> and <code>\mathbfcal</code> to a font style more similar to the traditional one, such as <code>\setmathfont{XITS Math}\setmathfont[range={cal,bfcal},StylisticSet=1]{XITS Math}</code>.</li>
<li>Use the <code>H</code> option for floats provided by <code>float</code> package and the <code>\FloatBarrier</code> after floats provided by <code>placeins</code> package to force floats to be placed in the wanted place.</li>
<li>You can use <code>geometry</code>, <code>nowidow</code>, etc. for page layout settings instead of manually adjusting.</li>
<li>Keep in mind that macro expansion (such as the <code>\ifnum</code> provided by <code>etoolbox</code>) is done before entering LaTeX engine level (such as the <code>\NewDocumentCommand</code> provided by <code>xparse</code>) during compiling.</li>
</ul>