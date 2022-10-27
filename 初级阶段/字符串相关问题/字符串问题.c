#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[10];
    char b[10];

    //从标准输入里面接收一定的字符串，放到长度为20的数组a中
    fgets(a, 20, stdin);
    //输出字符串数组a的内容，读到结束符时停止输出
    puts(a);

    //字符串复制功能：把a数组中的字符串的有效内容复制到b数组中
    strcpy(b, a);
    puts(b);

    //以下代码用于熟悉strcmp()函数的使用；
    //注意：strcmp()函数比较的是两个字符串对应的ASCII码值，而不是长度
    //具体比较方法：从左至右一个一个比较，一旦同一相对位置得出一个比较结果，则不再继续进行，比较结束；传出结果
    printf("两个字符串比较的结果%d\n", strcmp("hello world", "hello world")); //相等，输出0
    printf("两个字符串比较的结果%d\n", strcmp("how", "hello world"));         // o的ASCII码值大于e，故不再进行后面的比较，直接输出1
    printf("两个字符串比较的结果%d\n", strcmp("hello world", "hg"));          // g的ASCII码值大于e，故不再进行后续比较，直接输出-1
    return 0;
}

//实现功能：接收一行字符串并输出
//字符串可以有空格
