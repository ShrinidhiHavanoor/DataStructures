#include <stdio.h>
#include <stdlib.h>
struct dlink
{
    int info;
    struct dlink *llink,*rlink;
};
typedef struct dlink *NODE;
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct dlink));
    if(x==NULL)
    {
        printf("Out Of Memory!");
        return NULL;
    }
    x->llink=NULL;
    x->rlink=NULL;
    return x;
}
NODE ins_r(NODE f,int elem)
{
    NODE t,cur;
    t=getnode();
    t->info=elem;
    if(f==NULL)
    {
        printf("Inserted rear successfully!");
        return t;
    }
    cur=f;
    while(cur->rlink!=NULL)
    {
        cur=cur->rlink;
    }
    cur->rlink=t;
    t->llink=cur;
    printf("Inserted rear successfully!");
    return f;
}
NODE ins_f(NODE f,int elem)
{
    NODE t;
    t=getnode();
    t->info=elem;
    if(f==NULL)
    {
        printf("Inserted front successfully!");
        return t;
    }
    t->rlink=f;
    f->llink=t;
    f=f->llink;
    printf("Inserted front successfully!");
    return f;
}
NODE del_r(NODE f)
{
    NODE cur,prev;
    if(f->rlink==NULL)
    {
        printf("Item Deleted:-%d",f->info);
        free(f);
        return NULL;
    }
    cur=f;
    while(cur->rlink!=NULL)
    {
        prev=cur;
        cur=cur->rlink;
    }
    printf("Item Deleted:-%d",cur->info);
    prev->rlink=NULL;
    cur->llink=NULL;
    free(cur);
    return f;
}
NODE del_f(NODE f)
{
    NODE s;
    if(f->rlink==NULL)
    {
        printf("Item Deleted:-%d",f->info);
        free(f);
        return NULL;
    }
    printf("Item Deleted:-%d",f->info);
    s=f->rlink;
    f->rlink=NULL;
    s->llink=NULL;
    free(f);
    return s;
}
void disp(NODE f)
{
    NODE cur;
    if(f==NULL)
    {
        printf("List Empty!");
        return ;
    }
    cur=f;
    while(cur!=NULL)
    {
        printf("%d,",cur->info);
        cur=cur->rlink;
    }
}
int main()
{
    int ch,elem;
    NODE f=NULL;
    while(1)
    {
        printf("\n\n----------------------------------\n------MENU------\n");
        printf("1.Insert at front\n2.Insert at end\n3.Delete at front\n");
        printf("4.Delete at end\n5.Display\n6.Exit\nEnter Your Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the element to insert:");
            scanf("%d",&elem);
            f=ins_f(f,elem);
            break;

            case 2:
            printf("Enter the element to insert:");
            scanf("%d",&elem);
            f=ins_r(f,elem);
            break;

            case 3:
            f=del_f(f);
            break;

            case 4:
            f=del_r(f);
            break;

            case 5:
            disp(f);
            break;

            case 6:
            return 0;

            default:
            printf("INVALID CHOICE!!");
        }
    }
}