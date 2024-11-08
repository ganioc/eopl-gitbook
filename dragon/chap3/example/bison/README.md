# bison

```shell
bison brackens.y
gcc -Wall brackens.c 
$ ./a.out '(' 'N' ')'
$ ./a.out '(' '(' 'N' ')' ')' ')'
./a.out: syntax error

```

## example 1
calc.l, flex文件
calc.y,  bison文件

```shell
bison -vdty calc.y
flex  calc.l
gcc y.tab.c lex.yy.c -lfl
```

## 使用lex, yacc
使用这本书<< lex & yacc >>, 运行书里的例子。

```shell
lex lex-ch1.l
gcc lex.yy.c -ll
./a.out
```

### lex-ch1-4.l


```shell
lex lex-ch1-4.l

```

grammar, 语法, 根据特定的token序列，执行某种适当的操作。有一些例子
```shell
noun verb.
noun verb noun.
subject -> noun | pronoun
object -> noun
sentence -> subject verb object
```
yacc grammar, 

### lex-ch1-7.y
使用yacc grammar, 语法。yacc定义文件。

```shell
yyac -d lex-ch1-7.y # 生成了y.tab.h, y.tab.c


```

### ch3-05
这是一个完整的例子
y.tab.c, lex.yy.c
y.tab.h
ch3hdr2.hsudo 
ch3-05.y,
ch3-05.l,
用这些软件,

```shell
# ch3-05, 进行编译
yacc -d ch3-05.y
lex ch3-05.l
gcc y.tab.c lex.yy.c -ly -ll -lm
```

### MGL (Menu Generation Language)
菜单生成语言?
生成一种语言，来生成menu interface, 菜单接口, 
输入一个描述文件，-> 生成一个c语言程序,可以用来编译生成输出,
使用标准的curses library来在屏幕上画caidan, 菜单, menu

在很多场合，需要生成很多tedious, 重复的代码, 可以生成一种语言，写一个小的编译器，将你的语言翻译成C语言文件，你的项目可以处理的。-- 这才是技术!
Curses编程很繁琐, MGL可以自动进行大部分的layout, 减轻了工作。

screen <name>
title <string>

item <string>
[command <string>]
action{ execute | menu | quit| ignore} <name>
[attirubte {visible | invisible}]

end <name>

mgl.l, lex file,
mgl.y, yacc file,

P127
现在的编译方法还是

```shell
yacc -d mgl-1.y
lex  mgl-1.l
$(CC) -g -o $@ $^ -lfl -lm
```

生成了一个C ( screen-out.c )文件，用来生成menu程序，可以选择菜单。
y.tab.h 是一些宏定义的地方





