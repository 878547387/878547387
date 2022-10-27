#include <stdio.h>
int main()
{
  int i;        //存取元素个数
  int n = 0;    //存取数据出现次数
  int str[100]; //使用数组存取数据

  printf("请输入数据元素的个数");
  scanf("%d", &i);

//循环为数组赋值
  for (int m = 0; m <= (i-1); m++) //循环为数组赋值
  {
    scanf("%d", &str[m]);
  }

  //利用循环遍历数组从而判断值是否为2
  for (int q = 0; q<=(i-1); q++) 
  {
    if (str[q] == 2)
    {
      n++;
    }
  }
  printf("%d", n);
  return 0;
}