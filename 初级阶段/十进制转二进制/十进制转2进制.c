#include <stdio.h>
#include <cstdlib>
int ten_to_bin(int cop)
{
    int n;//定义一个动态分配内存的变量
    int *p;//指向分配内存的指针
    int tmp;//定义一个临时变量用来存放最后内存空间地址
    int i;//循环变量

    if(cop<= 256)
    {
        n = 8;
    }
    else if(n<= 512)
    {n = 9;}
    else if(n<= 1024)
    {n = 10;}
    else if (n<=2048)
    {n = 11;}
    else if (n <= 4096)
    (printf("数太大啦，暂不支持！\n"));
    p=(int *)malloc(n);//存放转换后的二进制数据信息

//判断数据奇偶并给数组赋值
    for(i=0;i<=1000;i++)
    {
        if(cop == 1)
        {
        p[i] = 1;
        tmp = i;
        break;
        }
        else 
        {
            if(cop%2 == 0)
            {
                cop /= 2;
                p[i]  = 0;
            }
            else
            {
                cop = (cop-1)/2;
                p[i] = 1;
            }
        }
    }

 //循环输出数组   
    for(i=tmp;i>=0;i--)
            {
                printf("%d",p[i]);
            }
    printf("\n");
    free(p);
    //一定要把p的值换成NULL！！！防止出现野指针
    p=NULL;
return 0;
}

int main(void)
{
    int a;//存放待转换数据
    while(1)
    {
    printf("请输入要转换的值");
    scanf("%d",&a);
    ten_to_bin(a);
    }
    return 0;
}