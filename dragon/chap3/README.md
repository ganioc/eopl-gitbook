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
