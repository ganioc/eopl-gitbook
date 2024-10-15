# chap 1 Introduction

lexeme, 词，词的单位，

syntax, 词法，句法
>parsing, syntax tree, 每一个节点代表一个操作，每一个节点的子节点代表操作的参数, 

semantic,  语义的
>语义分析利用语法树和符号表来检查源程序和语言定义的语义是否一致。
type checking, compiler 检查每一个操作符是否匹配， 生成中间代码, intermediate-code generation. 

Intermediate Code Generation
>a explicit low-level or machine-like intermediate representation, 理解为一个program for an abstract machine. 生成简单，转换为目标机器代码简单。
*three-address code*, 

Grammar
>语法的

Code optimization
代码优化

Code generation,
最终目标代码生成,

**编译器构造工具**
1. Parser generators,自动生成句法分析器，通过用一种编程语言描述的方法
2. Scanner generators, 生成词法分析器, 通过一种token的语言，使用正则描述的方法
3. Syntax-directed translation engines, 生成一组routines, 遍历解析树，生成中间码,
4. Code-generator generator, 通过产生一组规则，来将每一条中间码指令转换为目标机器的指令
5. Data-flow analysis engines, 数据流分析引擎, key part of 代码优化
6. Compiler-construction toolkits, 提供了一个集成的程序，生成编译器的不同步骤的中间结果


基本上是一个总览、介绍。



