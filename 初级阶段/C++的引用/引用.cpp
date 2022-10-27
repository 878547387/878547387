//使用C++的引用，一定要把后缀改成cpp
#include<stdio.h>
int change(int &b)//在形参上使用“&”是C++的语法，读作“引用”
{
    b++;
}
int main(void)
{
    int i = 0;
    change(i);//调用这样一个函数就不再需要传入地址了
    printf("%d\n",i);
    return 0;
}