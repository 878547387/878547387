#include <stdio.h>
#include<cstdlib>
int main()
{
	int i;
    char c;
  	char* p;
    printf("请输入最大字符串长度");
  	scanf("%d",&i);
    //使用以下代码把缓冲区的\n清除
    scanf("%c",&c);
  	p=(char*)malloc(i);
    printf("请输入一段字符串，长度小于你刚输入的值");
  	fgets(p,i+1,stdin);
  	puts(p);
	return 0;
}