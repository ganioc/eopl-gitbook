# gperf

```c
gperf rude-1.gperf > rude.c
gcc -Wall rude.c

```

## 使用gperf来将英语转换为数值,
atoms.gperf

```c
gperf --switch=1 --language=ANSI-C --struct-type atoms.gperf > atoms.c


```

