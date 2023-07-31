#include <stdio.h>
#include <stdlib.h>
struct link
{
    int info;
    struct link *llink,*rlink;
};
typedef struct link *NODE;
NODE getnode()
{
    NODE x;
    if(x==NULL)
    {
        printf("Out Of Memory!");
        return NULL;
    }
    x->llink=NULL;
    x->rlink=NULL;
    return x;
}
NODE insert(NODE head,int elem)
{
    if(head==NULL)
    {
        printf("Inserted successfully!");
        return NULL;
    }
    
}