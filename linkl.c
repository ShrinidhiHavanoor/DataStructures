#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
typedef struct node *NODE;
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("Out Of Memory!");
        return NULL;
    }
    x->info=0;
    x->link=NULL;
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
    while(cur->link!=NULL)
    {
        cur=cur->link;
    }
    cur->link=t;
    printf("Inserted rear successfully!");
    return f;
}
NODE ins_f(NODE f,int elem)
{
    NODE t;
    t=getnode();
    t->info=elem;
    t->link=f;
    f=t;
    return f;
}
NODE del_r(NODE f)
{
    NODE prev,cur;
    if(f->link==NULL)
    {
        printf("Item Deleted:-%d",f->info);
        free(f);
        return NULL;
    }
    cur=f;
    while(cur->link!=NULL)
    {
        prev=cur;
        cur=cur->link;
    }
    printf("Item Deleted:-%d",cur->info);
    prev->link=NULL;
    return f;
}
NODE del_f(NODE f)
{
    printf("Item Deleted:-%d",f->info);
    f=f->link;
    return f;
}
void disp(NODE f)
{
    NODE cur;
    if(f==NULL)
    {
        printf("Not Possible!");
        return ;
    }
    cur=f;
    printf("The element of the list are:-");
    while(cur!=NULL)
    {
        printf("%d,",cur->info);
        cur=cur->link;
    }
}
int main()
{
    int ch,elem;
    NODE f;
    f=getnode();
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
            disp(f->link);
            break;

            case 6:
            return 0;

            default:
            printf("INVALID CHOICE!!");
        }
    }
}