#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//以下函数用来实现字符串逆转操作
//传入一个存有字符串的数组，没有返回值
//成功了，在不同函数间修改数组的值不需要指针，因为数组名本身就是地址
void reverse(char *p)
{
    char tmp;
    int i;
    int len = strlen(p);
    //循环实现首位替换，从而实现字符串翻转
    for (i = 0; i <= (len - i - 1); i++)
    {
        tmp = p[i];
        p[i] = p[len - i - 1];
        p[len - i - 1] = tmp;
    }
}

int main()
{
    int len;
    char sent[100];
    int i;
    char *p = sent;
    //字符串可能有空格，所以使用gets()或者fgets()来接收数据
    //注意，gets()和fgets()使用稍有区别
    fgets(sent, sizeof(sent), stdin);
    len = strlen(sent);

    //以下代码：fgets把回车符一起接收进去，为了减少不必要的麻烦（比如数组长度不符合预期），把回车清为\0;
    sent[len - 1] = '\0'; //踩了一个坑，\0是一个字符，不能用双引号括起来

    //利用循环来实现数组内容收尾替换
    /*
        for (i = 0; i <= (len - i - 1); i++)
        {
            char tmp;
            tmp = sent[i];
            sent[i] = sent[len - i - 1];
            sent[len - i - 1] = tmp;
        }
    */

    //输出查看效果，主要用于调试代码
    /*
    for (i = 0; i <= len - 1; i++)
    {
        printf("%c", sent[i]);
    }
*/

    //使用fgets()接收的数据，会连同回车符"\n"一同接收，而gets()不会
    //为了实现数据反转的效果，需要把"\n"清除，否则识别数组有效长度永远大一个
    // puts(sent);
    // len = strlen(sent);
    reverse(sent);

    for (i = 0; i <= len - 1; i++)
    {
        printf("%c", sent[i]);
    }
    // printf("数组有效长度为%d",len);
    return 0;
}