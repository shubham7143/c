#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
}node;                          //self-referential structure.

int main(int argc, char const *argv[])
{
    node *ptr,*p;
    ptr=(node*)malloc(sizeof(node));
    ptr->data=72;
    ptr->next=NULL;
    p=(node*)malloc(sizeof(node));
    p->data=56;
    ptr->next=p;
    p->next=NULL;
    return 0;
}
