# bison

```shell
bison brackens.y
gcc -Wall brackens.c 
$ ./a.out '(' 'N' ')'
$ ./a.out '(' '(' 'N' ')' ')' ')'
./a.out: syntax error

```