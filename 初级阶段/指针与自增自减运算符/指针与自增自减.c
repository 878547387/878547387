#include <stdio.h>
int main(void)
{
    int a[3] = {1, 3, 8};
    int *p = a;
    int j;

    j = *p++; //等价于j=*p;p++;
              //此时p指向a[1]
    printf("a[0]=%d,j=%d,*p=%d\n", a[0], j, *p);

    j = (*p)++; //等价于j=(*p);(*p)++;
    //此时把啊a[1]赋值给j;然后把a[1]+1==4;
    printf("a[0]=%d,j=%d,*p=%d\n", a[0], j, *p);

    j=p[0]++;//p指向a[1],所以p[0]==a[1]==4==j;再执行p[0]++,p[0]==5==a[1];
    printf("a[1]=%d,j=%d,*p=%d\n", a[1], j, *p);
    return 0;
}