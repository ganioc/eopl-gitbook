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

