#include <stdio.h>

int jie(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * jie(n - 1);
}

int main()
{
    int n;
    int out; //用于接收计算结果
    while (1)
    {
        printf("请输入您要计算的阶乘值，并以回车结束\n");
        scanf("%d", &n);
        out = jie(n);
        printf("%d\n", out);
    }

    return 0;
}