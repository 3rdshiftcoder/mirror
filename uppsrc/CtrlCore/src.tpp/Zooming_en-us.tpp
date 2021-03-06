topic "Function to support actual resolution";
[2 $$0,0#00000000000000000000000000000000:Default]
[i448;a25;kKO9;2 $$1,0#37138531426314131252341829483380:class]
[l288;2 $$2,2#27521748481378242620020725143825:desc]
[0 $$3,0#96390100711032703541132217272105:end]
[H6;0 $$4,0#05600065144404261032431302351956:begin]
[i448;a25;kKO9;2 $$5,0#37138531426314131252341829483370:item]
[l288;a4;*@5;1 $$6,6#70004532496200323422659154056402:requirement]
[l288;i1121;b17;O9;~~~.1408;2 $$7,0#10431211400427159095818037425705:param]
[i448;b42;O9;2 $$8,8#61672508125594000341940100500538:tparam]
[b42;2 $$9,9#13035079074754324216151401829390:normal]
[{_} 
[ {{10000@(113.42.0) [s0;%% [*@7;4 Function to support actual resolution]]}}&]
[s0;%% &]
[s0;%% This set of function is designed to simplify writing code 
where screen coordinates are correctly computed based on current 
dialog scale factor.&]
[s3;%% &]
[s4; &]
[s5;:Upp`:`:Zx`(int`): [@(0.0.255) int]_[* Zx]([@(0.0.255) int]_[*@3 cx])&]
[s2;%% Same as Ctrl`::HorzLayoutZoom([%-*@3 cx]).&]
[s3;%% &]
[s4; &]
[s5;:Upp`:`:Zy`(int`): [@(0.0.255) int]_[* Zy]([@(0.0.255) int]_[*@3 cy])&]
[s2;%% Same as Ctrl`::VertLayoutZoom([%-*@3 cy]).&]
[s3;%% &]
[s4; &]
[s5;:Upp`:`:Zsz`(int`,int`): [_^Upp`:`:Size^ Size]_[* Zsz]([@(0.0.255) int]_[*@3 cx], 
[@(0.0.255) int]_[*@3 cy])&]
[s2;%% Same as Size(Zx([%-*@3 cx]), Zy([%-*@3 cy])).&]
[s3;%% &]
[s4; &]
[s5;:Upp`:`:Zsz`(Upp`:`:Size`): [_^Upp`:`:Size^ Size]_[* Zsz]([_^Upp`:`:Size^ Size]_[*@3 sz])
&]
[s2;%% Same as Size(Zx([%-*@3 sz.cx]), Zy([%-*@3 sz.cy])).&]
[s3;%% &]
[s4; &]
[s5;:Upp`:`:FontZ`(int`,int`): [_^Upp`:`:Font^ Font]_[* FontZ]([@(0.0.255) int]_[*@3 face], 
[@(0.0.255) int]_[*@3 height])&]
[s2;%% Returns font with height rescaled by vertical zoom factor. 
Same as Font([%-*@3 face],_Ctrl`::VertLayoutZoom([%-*@3 height]).&]
[s3;%% &]
[s4; &]
[s5;:Upp`:`:StdFontZ`(int`): [_^Upp`:`:Font^ Font]_[* StdFontZ]([@(0.0.255) int]_[*@3 height])
&]
[s2;%% Returns standard GUI font with height rescaled by vertical 
zoom factor. Same as FontZ(Font`::STDFONT, [%-*@3 height]).&]
[s3; &]
[s4; &]
[s5;:Upp`:`:SansSerifZ`(int`): [_^Upp`:`:Font^ Font]_[* SansSerifZ]([@(0.0.255) int]_[*@3 hei
ght])&]
[s5;:Upp`:`:ArialZ`(int`): [_^Upp`:`:Font^ Font]_[* ArialZ]([@(0.0.255) int]_[*@3 height])&]
[s2;%% Same as FontZ(Font`::SANSSERIF, [%-*@3 height]).&]
[s3; &]
[s4; &]
[s5;:Upp`:`:SerifZ`(int`): [_^Upp`:`:Font^ Font]_[* SerifZ]([@(0.0.255) int]_[*@3 height])&]
[s5;:Upp`:`:RomanZ`(int`): [_^Upp`:`:Font^ Font]_[* RomanZ]([@(0.0.255) int]_[*@3 height])&]
[s2;%% Same as FontZ(Font`::SERIF, [%-*@3 height]).&]
[s3; &]
[s4; &]
[s5;:Upp`:`:MonospaceZ`(int`): [_^Upp`:`:Font^ Font]_[* MonospaceZ]([@(0.0.255) int]_[*@3 hei
ght])&]
[s5;:Upp`:`:CourierZ`(int`): [_^Upp`:`:Font^ Font]_[* CourierZ]([@(0.0.255) int]_[*@3 height])
&]
[s2;%% Same as FontZ(Font`::MONOSPACE, [%-*@3 height]).&]
[s3;%% &]
[s0;%% ]]