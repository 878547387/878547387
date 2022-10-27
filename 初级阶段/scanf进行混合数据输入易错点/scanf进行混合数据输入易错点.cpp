#include <stdio.h>

int main()
{
    struct stu
    {
        int stu_num;
        char name[10];
        char gene;
    }student1,student2;
    //p=student1.name;
    //printf("请依次输入学生的学号、姓名、性别\n");
    //注意，混合类型输入时，要在%c之前加上空格，才能正常执行
    scanf("%d %s %c",&student1.stu_num,student1.name,&student1.gene);
    printf("%d %s %c", student1.stu_num,student1.name, student1.gene);
    return 0;
}
//学到了：可以用scanf和%s来给数组添加字符串