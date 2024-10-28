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


