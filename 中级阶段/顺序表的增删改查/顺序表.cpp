#include <stdio.h>
#define MaxSize 50 // define后面不能加分号，┭┮﹏┭┮
//顺序表的结构体

typedef int ElemType; //这样写是为了提高代码的复用性：只用修改一处代码，就能让这个顺序表存取并操作不同的数据类型
typedef struct
{
    ElemType data[MaxSize];
    int length;
} SqList;

//在顺序表的某个位置插入元素
//移位，入值，长加一
bool ListInsert(SqList &a, int pose, ElemType c)
{
    if (a.length > MaxSize)
    {
        return false;
    }
    if (pose < 1 || pose > a.length + 1)
    {
        return false;
    }
    for (int j = a.length; j >= pose; j--)
    {
        a.data[j] = a.data[j - 1];
    }
    a.data[pose - 1] = c;
    a.length++;
}

//删除顺序表a中第i个位置的元素，并使用引用变量e返回被删除数据的值
//取值，移位，长减一
bool ListDel(SqList &a, int pose, ElemType &e)
{
    if (pose < 1 || pose > a.length)
    {
        return false;
    }
    e = a.data[pose - 1];
    for (int j = pose; j < a.length; j++)//j不可能等与a.length，因为这样就会访问到无效数据
    {
        a.data[j - 1] = a.data[j];
    }
    a.length--;
}

//在顺序表L中查找第一个元素值等于e的元素，并返回其位序

bool ListLocate(SqList &a, ElemType i, ElemType e)
{
    for (int j = 0; j < a.length; j++)
    {
        if (a.data[j] == i)
        {
            e = i + 1;
            printf("该元素在第%d位\n", e);
            return true;
        }
    }
    return 0;
}
int main(void)
{
    bool ret; //接收函数操作结果
    SqList demo;
    ElemType e;
    demo.data[0] = 1;
    demo.data[1] = 2;
    demo.data[2] = 3;
    demo.data[3] = 4;
    demo.length = 4;
    ret = ListInsert(demo, 2, 99);
    if (ret = true)
    {
        printf("元素插入成功\n");
    }
    else
    {
        printf("元素插入失败\n");
    }
    ret = ListDel(demo, 3, e);

    if (ret = true)
    {

        printf("元素删除成功,删除元素的数据为%d\n", e);
    }
    else
    {
        printf("元素删除失败\n");
    }
    ret = ListLocate(demo, 3, e);
    return 0;
}


//2022年10月27日17:57分
//刚听完线性表的课程，照着书以及自己的理解敲下这段代码
//逻辑不很清晰，在插入和删除的循环部分徘徊良久，现在可以理解这样的写法，但没法推广开来
//发出疑问：对于数组的操作，有没有一个更适合我的理解方式，从而快速应对使用循环操作数据这类问题