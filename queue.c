#include <stdio.h>
#include <math.h>
#include <string.h>
#define max 20
int f=-1,r=-1;
void ins(int q[],int elem)
{
    if(r==max-1)
    printf("Queue Overflow!");
    else
    {
        if(f==-1 && r==-1)
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
}
void del(int q[])
{
    if(f==-1)
    printf("Queue Underflow!");
    else 
    {
        if(f==0 && r==0)
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
}
void disp(int q[])
{
    if(f==-1)
    printf("Queue Underflow!");
    else
    {
        printf("The elements of the Queue are:-");
        for(int i=f;i<=r;i++)
        printf("%d,",q[i]);
    }
}
int main()
{
    int ch,item,s[max];
    while(1)
    {
        printf("\n-----------------------------------------------------\n------MENU------\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter Your Choice:-");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the element to insert:-");
            scanf("%d",&item);
            ins(s,item);
            break;

            case 2:
            del(s);
            break;

            case 3:
            disp(s);
            break;

            case 4:
            return 0;
            break;

            default:
            printf("INVALID CHOICE!!!");
        }
    }
}