#include <stdio.h>
#include <math.h>
#include <string.h>
#define max 20
int f=-1,r=-1;
void ins_r(int q[],int elem)
{
    if(r==max-1)
    printf("Queue Overflow!");
    else if(f==-1 && r==-1)
    {
        f=0;
        r=0;
        q[r]=elem;
    }
    else
    {
        q[++r]=elem;
    }
}
void ins_f(int q[],int elem)
{
    if(r==max-1)
    printf("Queue Overflow!");
    else if(f==-1 && r==-1)
    {
        f=0;
        r=0;
        q[f]=elem;
    }
    else
    {
        q[--f]=elem;
    }
}
void del_r(int q[])
{
    if(f==-1)
    printf("Queue Underflow!");
    else if(f==0 && r==0)
    {
        printf("Item Deleted:-%d",q[r]);
        f=-1;
        r=-1;
    }
    else
    {
        printf("Item Deleted:-%d",q[r--]);
    }
}
void del_f(int q[])
{
    if(f==-1)
    printf("Queue Underflow!");
    else if(f==0 && r==0)
    {
        printf("Item Deleted:-%d",q[f]);
        f=-1;
        r=-1;
    }
    else
    {
        printf("Item Deleted:-%d",q[f++]);
    }
}
void disp(int q[])
{
    if(f==-1 && r==-1)
    printf("Queue Underflow!");
    else
    {
        printf("The elements of the array are:-");
        for(int i=f;i<=r;i++)
        printf("%d,",q[i]);
    }
}
int main()
{
    int ch,elem,q[max];
    while(1)
    {
        printf("\n---------------------------------------------------\n------MENU-------\n");
        printf("1.Insert at rear\n2.Insert at front\n3.Delete at rear\n4.Delete at front\n5.Display\n6.Exit\n");
        printf("Enter Your Choice:-");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the element to insert:-");
            scanf("%d",&elem);
            ins_r(q,elem);
            break;

            case 2:
            printf("Enter the element to insert:-");
            scanf("%d",&elem);
            ins_f(q,elem);
            break;

            case 3:
            del_r(q);
            break;

            case 4:
            del_f(q);
            break;

            case 5:
            disp(q);
            break;

            case 6:
            return 0;
            break;

            default:
            printf("INVALID CHOICE!");
        }
    }
}