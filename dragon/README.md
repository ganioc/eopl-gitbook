# Dragon Book
这是一本非常有意思的书。非常清晰的概念、技巧，和scheme的方法异曲同工。

Purple book, < Compilers: Principles, Techniques and Tools >

## 答案:

https://github.com/fool2fish/dragon-book-exercise-answers 


### 2.2.5 习题

### 2.2.6 Construct a context-free grammar for roman numerals
什么是罗马数字呢?

```shell
# 1,2,3 | 4 | 5,6,7,8 | 9
I, II, III | IV | V, VI, VII, VIII | IX
# 10
X
# 50
L
# 100
C
# 500
D
# 1000
M


digit -> smallDigit | IV | V smallDigit | IX
smallDigit -> I | II | III | ε

# map roman numerals to arabic numberals
XII => X, II=> 10 + 2 => 12
CXCIX => C, XC, IX => 100 + 90 + 9 => 199
MDCCCLXXX => M, DCCC, LXXX => 1000 + 800 + 80 = 1880

```

根据上面的两条规则，我们得到罗马数字(千以内)的生成语法:

```shell
romanNum -> thousand hundred ten digit
thousand -> M | MM | MMM | ε
hundred  -> smallHundred | C D | D smallHundred | C M
smallHundred  -> C | CC | CCC | ε
ten      -> smallTen | X L | L smallTen | X C
smallTen -> X | XX | XXX | ε
digit    -> smallDigit | I V | V smallDigit | I X
smallDigit ->  I | II | III | ε

```



