
chap 2
========

# 2 Induction , Recursion, and scope
This chapter introduces the fundamental technique of recursive programming, along with its relation to the mathematical technique of induction. The notion of scope, which plays a primary role in programming language, is also presented. Finally, the material in this chapter will improve your facility with the tools introduced in chapter 1. Section 2.1 and section 2.2 introduce techniques for inductively specifying data structures and show how such specifications may be used to guide the construction of recursive programs. Section 2.3 then introduces the notions of variable binding and scope.

The programming exercises are the heart of this chapter. They provide experience that is essential for mastering the technique of recursive programming upon which the rest of this book is based.

[按]
- induction : 归纳法
- recursion : 递归
- scope : 作用域

本章介绍了递归编程方法，虽然这种方法因为早期计算机硬件容量的限制，而不被提倡。

## 2.1 Inductively Specified Data
 We have already seen a number of data types in Scheme. What is a data type in general? For our purposes, it is enough to say that a data type consists of a set of values along with a set of operations on those values. Every time we decide to represent a certain set of quantities in a particular way, we are defining a new data type: the data type whose values are those representations and whose operations are the procedures that manipulate those entities.

 [按]
 - 数据类型，数据，对数据的操作

 When writing code for the operations on a new data type, it is important to know precisely what values may occur as members of the type. In this section we introduce formal techniques for specifying the set of  values that belong to a data type. 

 [按]
 - 定义属于某种数据类型的一组数值

 ### 2.1.1 Inductive Specification
 **Inductive specification** is a powerful method of specifying a set of values. To illustrate this method, we use it to describe a certain subset of the natural numbers:

 归纳的规则来定义数据类型，产生新的数据类型

 Define the set S to be the smallest set of natural numbers satisfying the following two properties:

 1. $ 0 \in  S$ and
 2. Whenever $ x \in S $, then  $ x+3 \in S $

 [按]
 使用逻辑符号, 数学的方法来对数据类型的定义进行严格的证明。

 "The smallest set" is the one that is a subset of all the sets satisfying properties 1 and 2.

 Let us see if we can describe some partial information about S to arrive at a noninductive specification. We know that 0 is in S, by property 1. Since $ 0 \in S $, by property 2 it must be that $ 3 \in S $. Then since $ 3 \in S $, by property 2 we conclude that $ 6 \in S $, and so on. So we see that ll the multiples of 3 are in S. If we let M denote the set of all multiples of 3, we can restate this conclusion as $ M \subseteq S $. But the set M itself satisfies properties 1 and 2. Since S is a subset of every set that satisfies properties 1 and 2, it must be that $ S \subseteq M $. So we deduce that $ S = M $, the set of multiples of 3. This is plausible: we know all the multiples of 3 must be in S, and anything else is extraneous.

 [按]
 extraneous, 无关，没有直接联系

This is a typical inductive definition. To specify a set $ S $ by induction, we define it to be the smallest set satisfying two properties of the following form:

1. Some specific values must be in $ S $.
2. If certain values are in $ S $, then certain other values are also in $ S $.

Sticking to this recipe guarantees that $ S $ consists precisely of those values inserted by property 1 and those values included by repeated application of property 2. As stated, this recipe is rather vague. It can be stated more precisely, but that would take us too far afield. Instead, let us see how this proces works on some more examples.

The data type list-of-numbers is the smallest set of values satisfying the two properties:

1. The empty list is a list-of-numbers, and
2. If $ l $ is a list-of-numbers and $ n $ is a number, then the pair $ (n \space . \space l) $ is a list-of-numbers.

From this definition we infer the following:

1. () is a list-of-numbers, because of property 1.
2. $ (14 \space . \space ()\space ) $ is a list-of-numbers, because 14 is a number and () is a list-of-numbers.
3. $ (3\space.\space(14\space. \space ())) $ is a list-of-numbers, because 3 is a number and $ (14\space.\space())$ is a list-of-numbers.
4. $(-7\space.\space(3\space.\space(14\space.\space())))  $ is a list-of-numbers, because $-7$ is a number and $(3\space.\space(14\space.\space()))$ is a list-of-numbers.
5. Nothing is a list-of-numbers unless it is built in this fashion.

Converting from dot notation to list notation, we see that $()$, $(14)$, $(3 \space 14)$,and $(-7\space3\space14)$ are all members of list-of-numbers.

### Backus-Naur Form and Syntactic Derivations
The previous example was fairly straightforward, but it is easy to imagine how the process of describing more complex data types might become quite cumbersome. To remedy this, a notation has been developed to express the same ideas more concisely: **Backus-Naur Form** or **BNF**. We frequently use it to describe the structure of a data type. BNF is also widely used in specifying the syntax of programming languages.

BNF can be used to inductively define a number of sets at once. These sets are called **syntactic categories**, or sometimes **nonterminals**, and are customarily written with angle brackets around the name of the set: <list-of-numbers>. (When no ambiguity results, we shall sometimes refer informally to syntactic categories without using angle brackets or dashes: "list of numbers.") Each syntactic category is defined by a finite set of **rules**, or **productions**. Each rule asserts that certain values must be in the syntactic category.

The BNF definition of list-of-numbers has two rules that correspond to the two properties.

$$
\begin{aligned}
\langle list\text{--}of\text{--}numbers \rangle &::=()  \\

    \langle list\text{--}of\text{--}numbers \rangle &::=(\langle number\rangle \space . \space \langle list\text{--}of\text{--}numbers \rangle )  \\
\end{aligned}

$$

The first rule says that the empty list is in $ \langle list\text{--}of\text{--}numbers \rangle $ , and the second says that if $n$ is in $ \langle number \rangle $ and $l$ is in $ \langle list\text{--}of\text{--}numbers \rangle$, then $(n\space . \space l)$ is in $ \langle list\text{--}of\text{--}numbers \rangle$.

Each rule begins by naming the syntactic category being defined, followed by ::= (read $is$ ). The right-hand side of each rule specifies a method for constructing members of the syntactic category in terms of other syntactic categories and $ terminal\space symbols$, such as the left and right parentheses, and the period in the previous example.

Often some syntactic categories mentioned in a BNF rule are left undefined, such as $\langle number \rangle$. Defining all categories would needlessly complicate the rule if it is safe to assume the reader knows what some of the categories are.

BNF is often extended with a few notational shortcuts. One can write a set of rules for a single syntactic category by writing the left-hand side and ::= just once, followed by all the right-hand sides separated by the special symbol $|$ (vertical bar, read $or$). A $\langle list\text{--}of\text{--}numbers \rangle$ can then be defined by

$$
\begin{aligned}
\langle list\text{--}of\text{--}numbers \rangle &::= () | (\langle number\rangle \space . \space \langle list\text{--}of\text{--}numbers \rangle )

\end{aligned}

$$

$\quad$ Another shortcut is the $Kleene \space star$, expressed by the notation $\{...\}^*$. When this appears in a right-hand side, it indicates a sequence of any number of instances of whatever appears between the braces. This includes the possibility of no instances at all. Using the Kleene star, the definition of $\langle list\text{--}of\text{--}numbers \rangle$ in list notation is simply

$$
\begin{aligned}
\langle list\text{--}of\text{--}numbers \rangle &::=  (\{\langle number\rangle\}^* )

\end{aligned}

$$

$\quad$ If there are zero instances, we get the empty list. A variant of the star notation is $Kleene plus \{... \}^+$, which indicates a sequence of $one$ or more instances. Substituting $^+$ for $^*$ in the above example would define the syntactic category of nonempty lists of numbers. These notational shortcuts are just that $\text{--}$ it is always possible to do without them by using additional BNF rules.

$\quad$ If a type is specified use BNF rules , a $syntactic \space derivation$ may be used to prove that a given data value is a member of the type. Such a derivation starts with the nonterminal corresponding to the type. At each step, indicated by an arrow $\Rightarrow$, a nonterminal is replace by the right-hand side of a corresponding rule, or with a known member of its syntactic class if the class was left undefined. For example, the previous demonstration that $(14\space.\space())$ is a list of numbers may be formalized with the following syntactic derivation:

$$
\begin{aligned}
&\langle list\text{--}of\text{--}numbers\rangle \\
\Rightarrow &(\langle number \rangle \space . \space \langle list\text{--}of\text{--}numbers\rangle ) \\
\Rightarrow &(14 \space . \space \langle list\text{--}of\text{--}numbers\rangle) \\
\Rightarrow &(14 \space . \space ()) \\
\end{aligned}
$$

$\quad$ The order in which nonterminals are replaced is not significant. Thus another possible derivation of $(14 \space . \space ())$ is 

$$
\begin{aligned}
&\langle list\text{--}of\text{--}numbers\rangle \\
\Rightarrow &(\langle number \rangle \space . \space \langle list\text{--}of\text{--}numbers\rangle ) \\
\Rightarrow &(\langle number \rangle \space . ()) \\
\Rightarrow &(14 \space . \space ()) \\
\end{aligned}
$$

### $\circ$ Exercise 2.1.1
Write a syntactic derivation that proves $(-7 \space . \space (3 \space . \space (14 \space . \space ())))$ is a list of numbers. $\Box$

### $\bold{2.1.3 \space using \space  BNF\space to  \space Specify \space Data}$

The term $datum$ refers to any literal data representation. BNF may be used to specify concisely the syntactic category of data in Scheme. We have seen that numbers, symbols, booleans, and strings all have literal representations, which we associate with the syntactic categories $\langle number \rangle$, $\langle symbol \rangle$, $\langle boolean \rangle$, and $\langle string \rangle$, respectively. Section 1.2 informally introduced representations for lists, improper lists (which end with dotted pairs), and vectors. These compound data types contain components that may be numbers, symbols, booleans , strings , or other lists, improper lists or vectors. This is formally specified by the following BNF rules

---

$$
\begin{aligned}
\langle list \rangle &::= (\{\langle datum \rangle\}^*) \\
\langle dotted\text{--}datum \rangle &::= (\{ \langle datum \rangle\}^+ \space . \space \langle datum \rangle ) \\
\langle vector \rangle &::=  \# (\{ \langle datum \rangle \}^*) \\
\langle datum \rangle &::= \langle number \rangle | \langle symbol \rangle | \langle boolean \rangle  \\
&| \langle string \rangle | \langle list \rangle | \langle dotted\text{--}datum \rangle | \langle vector \rangle

\end{aligned}
$$

---

These four syntactic categories are all defined in terms of each other. This is legitimate because there are some simple possibilities for data that are not defined in terms of the other categories.

$\quad$ To illustrate the use of this grammar, consider the following syntactic derivation proving that $(\#t \space (foo \space . \space ()) \space 3)$ is a datum.

$$
\begin{aligned}
&\langle list \rangle \\
\Rightarrow &(\langle datum \rangle \space \langle datum \rangle \space \langle datum \rangle) \\
\Rightarrow &(\langle boolean \rangle \space \langle datum \rangle \space \langle datum \rangle) \\
\Rightarrow &(\#t \space \langle datum \rangle \space \langle datum \rangle) \\
\Rightarrow &(\#t \space \langle dotted\text{--}datum \rangle \space \langle datum \rangle) \\
\Rightarrow &(\#t \space ( \{ \langle datum \rangle  \}^+ \space . \space \langle datum \rangle ) \space \langle datum \rangle) \\
\Rightarrow &(\#t \space ( \langle symbol \rangle \space . \space \langle datum \rangle ) \space \langle datum \rangle) \\
\Rightarrow &(\#t \space ( foo \space . \space \langle datum \rangle ) \space \langle datum \rangle) \\
\Rightarrow &(\#t \space ( foo \space . \space \langle list \rangle ) \space \langle datum \rangle) \\
\Rightarrow &(\#t \space ( foo \space . \space ())  \space \langle datum \rangle) \\
\Rightarrow &(\#t \space ( foo \space . \space ())  \space \langle number \rangle) \\
\Rightarrow &(\#t \space ( foo \space . \space ())  \space \langle 3 \rangle) \\
\end{aligned}
$$

$\quad$ All three elements of the outer list were introduced at once. This shortcut was possible because the grammar uses a Kleene star. Of course, the Kleene star and plus notation could be eliminated by introducing new nonterminals and productions, and the three list elements would then be introduced with three derivation steps instead of one.

### $\circ$ Exercise 2.1.2
Rewrite the $\langle datum \rangle$ grammar without using the Kleene star or plus. Then indicate the changes to the above derivation that are required by your grammar. $\Box$

### $\circ$ Exercise 2.1.3 
=======
### $\circ$ Exercise 2.1.2
Rewrite the $\langle datum \rangle$ grammar without using the **Kleene star** or **plus**. Then indicate the changes to the above derivation that are required by your grammar. $\square$

### $\circ$ Exercise 2.1.3
Write a syntactic derivation that proves $(a \space \text{\textquotedblleft}mixed\text{\textquotedblright} \#(bag \space (of \space . \space data)))$ is a datum , using either the grammar in the book or your grammar from the last exercise. What can you say about $(a\space . b \space . \space c)$ ? $\square$

[答]

$$
\begin{aligned}
&(a \space \text{\textquotedblleft}mixed\text{\textquotedblright} \space \#(bag \space (of \space . \space data))) \\
\Rightarrow &(\langle datum \rangle \space \langle datum \rangle \space \langle datum \rangle) \\
\Rightarrow &(\langle symbol \rangle \space \langle string \rangle \space \langle vector \rangle) \\
\Rightarrow &(\langle list \rangle) \\
\end{aligned}
$$


$\quad$ Let us consider the BNF definitions of some other useful data types. Many symbol manipulation procedures are designed to operate on lists that contain only symbols and other similarly restricted lists. We formalize this notion with their rules:

$$
\begin{aligned}
\langle s\text{--}list \rangle &::= (\{\langle symbol\text{--}expression \rangle\}^*) \\
\langle symbol\text{--}expression \rangle &::= \langle symbol \rangle | \langle s\text{--}list \rangle

\end{aligned}
$$

The literal representation of an s-list contains only parentheses and symbols. 

For example

$ (a \space b \space c) $

$ (an \space (((s\text{--}list)) \space (with \space lots) \space ((of) \space nesting)))$

$\quad$ A binary tree with numeric leaves and interior nodes labeled with symbols may be represented using three-element lists for the interior nodes as follows:

$ \langle tree \rangle \space ::= \space \langle number \rangle | (\langle symbol \rangle \space \langle tree \rangle )$

Examples of such trees follow:

$$
\text{1} \hspace{50cm} \\
\text{2} \hspace{50cm} \\
(foo \space 1 \space 2) \hspace{50cm} \\
(bar \space 1 \space (foo \space 1 \space 2)) \hspace{50cm} \\
(bar \space (bar \space 1 \space (foo \space 1 \space 2)) (biz \space 4 \space 5)) \hspace{50cm} \\
$$

$\quad$ BNF rules are said to be *context free* because a rule defining a given syntactic category may be applied in any context that makes reference  to that syntactic category. Sometimes this is not restrictive enough. For example, a node in a binary search tree is either empty or contains a key and two subtrees.

$$
\langle bin\text{--}search\text{--}tree \rangle ::= \space () | (\langle key \rangle \space \langle bin\text{--}search\text{--}tree \rangle \langle bin\text{--}search\text{--}tree \rangle) \hspace{50cm}
$$

This correctly describes the structure of each node but fails to mention an important fact about binary search tree: all the keys in the left subtree are less than (or equal to) the key in the current node, and all the keys in the right subtree are greater than the key in the current node. Such contraints are said to be **context sensitive**, because they depend on the context in which they are used.

$\quad$ Context-sensitive constraints also arise when specifying the syntax of programming languages. For instance, in many languages every identifier must be declared before it is used. This constraint on the use of identifiers are sensitive to the context of their use. Formal methods can be used to specify context-sensitive constraints, but these methods are far more complicated than BNF. In practice, the usual approach is first to specify a context-free grammar using BNF. Context-sensitive constraints are then added using other methods, usually prose, to complete the specification of a context-sensitive syntax.

### Induction
Having described data types inductively, we can use the inductive definitions in two ways: to prove theorems about members of the data type and to write programs that manipulate them. Writing the program is the subject of the next two sections; here we present an example of such a proof.

$\large Theorem.$ Let s $\isin \langle tree \rangle$. Then s contains an odd number of nodes.

Proof. The proof is by induction on the size of s, where we take the size of s to be the number of nodes in s. The induction hypothesis, $IH(k)$, is that any tree of $size \le k$ has an odd number of nodes. We follow the usual prescription for an inductive proof: we first prove that $IH(0)$ is true, and we then prove that whenever $k$ is a number such that $IH$ is true for $k$, then $IH$ is true for $k+1$ also.

i. There are no trees with 0 nodes, so $IH(0)$ holds trivially.
ii. Let $k$ be a number such that $IH(k)$ holds, that is, any tree with $\le k$ nodes actually has an odd number of nodes. We need to show that $IH(k+1)$ holds as well: that any tree with $\le k + 1 $ nodes has an odd number of nodes. If $s$ has $\le k + 1$ nodes, there are exactly two possibilities according to the BNF definition of $\langle tree \rangle$:

a. $s$ could be of the form $n$, where $n$ is a number. In this case, $s$ has exactly one node, and one is odd.

b. $s$ could be the form $(sym \space s_1 \space s_2)$, where $sym$ is a symbol and $s_1$ and $s_2$ are trees. Now $s_1$ and $s_2$ must have fewer nodes than $s$. Since $s$ has $\le k+1$ nodes, $s_1$ and $s_2$ must have $\le k$ nodes. Therefore they are covered by $IH(k)$, and they must each have an odd number of nodes, say $2n_1 + 1$ and $2n_2 +1$ nodes, respectively. Therefore the total number of nodes in the tree, counting the two subtrees and the root , is

$$
(2n_1+1)+(2n_2+1) + 1 = 2(n_1+n_2+1) +1
$$
which is once again odd.

This completes the proof of the claim that $IH(k+1)$ holds and therefore completes the induction. $\square$

$\quad$ The key to the proof is that the substructures of a tree $s$ are always smaller than $s$ itself. Therefore the induction might be rephrased as follows:

1. $IH$ is true on simple structures (those without substructures).
2. If $IH$ is true on the substructures of $s$, then it is true on $s$ itself.

## 2.2 Recursively Specified Programs

In the previous section, we used the method of inductive definition to characterize complicated sets. Starting with simple members of the set, the BNF rules were used to build more and more complex member of the set. We now use the same idea to define procedures for manipulating those sets. First we define the simple parts of a procedure's behavior (how it behaves on simple inputs), and then we use this behavior to define more complex behaviors.


