#include <stdio.h>
int main()
{
    char a[10];
    int i;
    scanf("%s",a);
    //使用%s无法接收带有空格的连续字符串
    printf("%s",a);
    return 0;
}

//输入：Hello World
//输出：Hello