如何安装groff的字体，如何生成pdf文件？

```shell
sudo ./install-font.sh -n  -s -d -F NotoSansSC -f +R ./noto/NotoSansSC-Regular.ttf

groff -me -Tpdf -Kutf8 -fNotoSansSC format.me > format.pdf


```

除了pdf内嵌字体，体积较大以外，其它的功能都可以了。


