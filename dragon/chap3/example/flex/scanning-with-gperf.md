# Scanning with gperf

gperf是什么命令呢?

设计一个程序，自动生成keyword recognizder, 

## 使用一个flex 的例子，gogo

```c
flex goid.l
gcc -Wall -W lex.yy.c -lfl

$ echo 'gotoo goto go to' | ./a.out 
Saw an identifier (gotoo).
Saw a goto.
Saw a goto.

End of file.
```

