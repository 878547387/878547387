#include <stdio.h>
#include <stdlib.h>

//使用结构体创建链表
typedef struct p_List
{
    int data;
    struct p_List *p_next; //经过瞎调试，终于发现，这儿还不能使用List，必须使用p_list；
} List;
//使用malloc创建节点
void *creat_List(List *i)
{
    List *p; //用于指向新建的空间
    List *tmp;
    p = (List *)malloc(sizeof(List));
    tmp = i->p_next;
    i->p_next = p;
    p->p_next = tmp;
}

int main(void)
{
    //首先创建一个头结点和尾节点
    List *P_node; //用于指向链表
    List *p_head; //头指针
    List *p_end;  //尾指针
    List head;
    List end;
    p_head = &head;
    p_end = &end;
    p_head->p_next = p_end;
    P_node = &head;
    creat_List(P_node);
    return 0;
}