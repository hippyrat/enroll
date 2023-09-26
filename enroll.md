# C语言基础
## 利其器
首先为了linux环境，在b站上找了教程并下载激活了VMware，之后又在虚拟机中安装了linux并联网，再之后又通过终端加载了GCC套件获得了编译c的环境
### Q1:
输出Welcome to join Embedded Studio!
### Q2:
设置断点在函数welcome开始处，str： 0x0
为了找之后str的值，添加volatile来保留str，第四句后str：0x404000
在出了welcome函数的大括号后，str就没值了
### Q3：
-o：gcc -o program program.c
编译program.c并生成一个名为program的可执行文件。
-Wall：gcc -Wall program.c
启用编译器的所有警告，有助于发现潜在的代码问题。
-g：gcc -g program.c
使用gdb调试时用。
-D：gcc -DDEBUG program.c
在编译过程中定义名为DEBUG的预处理宏，便于条件编译。
## 三角形问题
 学习了if else语句并使用嵌套的多层if else解决了问题
![Alt text](%E4%B8%89%E8%A7%92%E5%BD%A21.png)
![Alt text](%E4%B8%89%E8%A7%92%E5%BD%A23.png)
![Alt text](%E4%B8%89%E8%A7%92%E5%BD%A22.png)
## 内卷方阵
使用if else写了出来了，感觉非常臃肿，之后有时间再想想怎么优化
![Alt text](%E6%96%B9%E9%98%B51.png)
![Alt text](%E6%96%B9%E9%98%B52.png) 
![Alt text](%E6%96%B9%E9%98%B53.png) 
![Alt text](%E6%96%B9%E9%98%B54.png) 
![Alt text](%E6%96%B9%E9%98%B55.png)
## 函数大师
（零基础开始学习函数成为大师我感觉还要好久）
### 实现函数
使用strlen()函数来计算字符串的长度，并将结果存储在变量n中，所以n的值是14(Embedded Studio14个字符)
使用str直到找到第一个空格字符，然后将他设置为\0，用break退出循环，str变为Embedded\0Studio
再次用strlen()函数来计算字符串str的长度，将结果存储在n1中，此时n1的值是8（因为到休止符就停了）；再使用strlen()函数来计算字符串str的后半部分的长度，将结果存储在n2中，n2的值是6。
str值是Embedded，str + n1 + 1代表向后移动n1+1即str2
### restrict作用
restrict关键字的作用是告诉编译器：指针dest和src不会指向相同的内存区域。这个提示有助于编译器进行一些优化，以提高代码的性能。
## 函数参数
![Alt text](%E6%AF%94%E5%A4%A7%E5%B0%8F1.png) 
![Alt text](%E6%AF%94%E5%A4%A7%E5%B0%8F2.png) 
![Alt text](%E6%AF%94%E5%A4%A7%E5%B0%8F3.png)
## 预处理与宏
别的好难T T先做水题吧
### Subtestk1 Q1：
1：删除注释（虽然在这段测试代码里没注释）
2：#define定义的标识符和宏的替换（即题中所说宏替换）
3：头文件包含（#include）
4：条件编译，即根据不同的条件，选择是否编译某一段代码（如本题中所用#if #elif #else）
### Subtestk2：
输出You got this message：
gcc -o myprogram myprogram.c -DTEST -DLOCAL
输出You got another message：
gcc -o myprogram myprogram.c -DTEST
用gcc来定义宏来让选项成立。

## 膨胀的结构体
### Q1:
Offset of a: 0
Offset of b: 8
Offset of c: 16
Offset of d: 24
Offset of e: 28
Offset of f: 32
Offset of g: 36
Offset of h: 40
### Q2:
48字节
### Q3：
顺序改成cghbadef但总大小纹丝不动T T，之后询问学长知道可以更小，继续研究规则，发现是规则理解错了，改后cghaebdf大小为32字节。
Offset of a: 16
Offset of b: 28
Offset of c: 0
Offset of d: 30
Offset of e: 24
Offset of f: 31
Offset of g: 8
Offset of h: 12
Size of Newstruct: 32

