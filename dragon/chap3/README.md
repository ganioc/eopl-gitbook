# Lexical Analysis

## 3.3.1 语言的有效字符集, 数字，id形式,

### C

字符:a-z|A-Z|, 数字: 0-9
特殊符号: whitespace, spaces, tabs, newlines
punctuation: ; , . -> 

操作符: 
算术操作符: + - * / % 
关系操作符: == != < > <= >=
逻辑操作符: && || !
Bitwise操作符: & | ^ ~ << >>
赋值操作符: $= += -= *= /= %=$

限位符: {}, [], ()
多行注释 $ /**/ $
// 单行注释

预处理符: #

转义符: \\' \\" \\\ \n \t \0

整数: 42, 052(octal), 0x2A
浮点数: 3.14, 2.5e3, -1.5e-2
字符: 'a', '\n'
字符串: "Hello"
Suffixes: U(42U, unsigned integer), L(long, UL, unsigned long integer), f(3.14f, 3.14L, long double), 

ID: 长度63个字符, 用于外部链接, 1024字符用于内部链接, 大小写敏感

### C++
和C类似，多了一个scope resolution operator: '::'
增加了binary: 0b, 0B, 从C++14开始
Suffixes: LL, ll, longlong (42ll)

ID: 长度2048, 没有限制

### C#
和C类似, Conditional operator: ?:
注释操作符: /// , XML Documentation Comments
没有8进制数
Suffixes: d(double, 3.14d), m(3.14m, decimal)

ID: 支持Unicode字符, 对字符长度没有限制
大小写敏感

### Fortran
字符: A-Z, a-z, 0-9
Whitespace: spaces, tabs, newlines
Punctuation: , : ;
操作符: + - * / **,
关系操作符: .EQ. .NE. .LT. .LE. .GT. .GE.
逻辑操作符: .AND. .OR. .NOT. .EQV. .NEQV.
限位符: (), [],
注释符: !

ID: 99版本后, 255长度, 77版本, 6个字符长度

### Java
类似C, 文档注释: /** ... */, 这里会生成文档
annotations: At symbol, @ , 标注

ID: 可以以A-Za-z$_, 为开始字符,长度无限制
大小写敏感

### LISP
注释: ; , #| |#, 多行注释
Escape characters: | 
Octal: #052, #x2A, #b101010
复数: 3.0 + 4.0i
字符: 'a', #\newline, #\tab, 

ID: 可以开头+,-,*,/,!,?,a-z,A-Z,0-9
长度没有限制

### SQL
INTEGER,
DECIMAL(10,2), precision, 精度，scale, 比例
Infinity, -Infinity
NaN, Not a number, 

ID: _$开始， 长度为128字符, 

## 3.5 lexical analyzer
flex, yacc is in bison,

Lex language, 作为输入，
Lex compiler, 进行变异，将输入的Patterns转换为一个transition diagram， 生成代码, lex.yy.c, 来模拟这种状态转移表。生成a stream of tokens. 

token的name, attribute value, 

```flex
declarations (定义variables, manifest constants常量，如token的名称, 正则定义)
%%
translation rules，(Pattern { Action })
%%
auxiliary functions, 可以被lexical analyzer调用,
```
工作原理:
Lexical analyzer是被parser调用的。parser调用lexcial analyzer读入，一个字符一次，直到找到input的prefix是满足匹配Pattern, $P_i$. 然后执行后面的动作$A_i$, $A_i$会返回Parser. Lexcial analyzer会返回一个value, token name, 给parser, 使用共享的整数值$yylval$来将找到的lexeme信息返回给parser。

yylval
yytext
yyleng

installID(), 将找到的lexeme放在symbol table中;
这个函数返回一个指针到symbol table, 放在全局变量yylval中, 可以被parser, 后面的compiler部分使用。Lex还会生成另外两个变量
(a) yytext, 指向lexeme的开始部分, 类似于lexemeBegin, 
(b) yyleng, 是找到的lexeme的长度,
token name ID 会返回给parser,

installNum(), 将以类似的方式返回pattern number,

### 3.5.3 Lex如何解决冲突问题

2条规则, 选择哪一个lexeme呢?

1. 选择更长的prefix
2. 选择最先出现的那个pattern

### 3.5.4 Lookahead Operator

提前操作符， 

. -> any string without a newline;

# 目录

-  example/bison, < lex & yacc >