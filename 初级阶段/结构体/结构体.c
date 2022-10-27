#include <stdio.h>

//创建一个结构体
//该结构体占用20字节内存，因为存在对齐，对齐的目的是因为提高cpu访问内存的效率
//此程序是32位的，所以四个字节四个字节的对齐
struct cup
{
    char name[10];
    int width;
    char color;
};

int main(void)
{

    //结构体的初始化：创建一个struct cup类型的成员"my_cup"
    struct cup my_cup = {"my_cup", 5, 'y'};
    //结构体成员的访问："."运算符
    printf("%s %d %c\n", my_cup.name, my_cup.width, my_cup.color);

    //一下代码块学习结构体指针的使用
    struct cup *p;
    p = &my_cup;
    //错误示范
    // printf("%s %d %c\n", *p.name, *p.width, *p.color);//编译报错，因为.的优先级高于*，就会出现语法错误
    printf("%s %d %c\n", (*p).name, (*p).width, (*p).color);
    //以下是使用指针的写法：p->访问指针所指向的结构体成员
    printf("%s %d %c\n", p->name, p->width, p->color);

    //结构体数组的使用
    struct cup array[3]; //创建一个长度为三的struct cup类型数组
                         /**
                             以下代码输出为20
                             可以看到，操作系统为结构体所分配的空间不能根据其成员类型占据空间简单的相加
                             为了提高cpu的访问效率，不足四个字节的变量，多余内存并不会被使用，否则可能一个变量需要访问两次内存——>内存对齐的相关知识
                             char name[10]实际上被分配12个字节的空间
                             char color实际上被分配了4个字节的空间，只是剩余三个字节不使用而已
                             printf("此结构体所占的空间为%d\n", sizeof(struct cup));
                         **/

    //循环读取为结构体数组赋值
    int i; //循环变量
    printf("请依次输入杯子的姓名、宽度、颜色（以首字母代替）");
    for (i = 0; i <= 2; i++)
    {
        scanf("%s%d %c", array[i].name, &array[i].width, &array[i].color);
    }

    //循环输出结构体数组内容
    for (i = 0; i <= 2; i++)
    {
        printf("%s%d%c\n", array[i].name, array[i].width, array[i].color);
    }
    return 0;
}

//此程序用来练习结构体相关内容
//结构体内存的占用
//结构体的创建、初始化、访问；结构体数组的使用