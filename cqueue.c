#include <stdio.h>
#include <math.h>
#define max 5
int f=-1,r=-1;
void ins(int q[],int elem)
{
    if(((r+1)%max)==f)
        printf("Queue Overflow!");
        else if(f==-1 && r==-1)
        {
            f=0;
            r=0;
            q[r]=elem;
        }
        else
        {
            r=(r+1)%max;
            q[r]=elem;
            printf("Element inserted sucessfully!");
        }
}
void del(int q[])
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
        printf("Item Deleted:-%d",q[f]);
        f=(f+1)%max;
    }
}
void disp(int q[])
{
    if(f==-1)
    printf("Queue Underflow!");
    else
    {
        printf("The elements of the queue are:-");
        // for(int i=f;i<=r;((i+1)%max))
        // printf("%d,",q[i]);
        int i=f;
        while(i!=r)
        {
            printf("%d,",q[i]);
            i=(i+1)%max;
        }
    }
}
int main()
{
    int ch,elem,q[max];
    while(1)
    {
        printf("\n_-------------------------------_\n-----MENU-----\n");
        printf("1.Insert\n2.Delete\n3.Display\nExit\nEnter Your Choice:-");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the element to insert:-");
            scanf("%d",&elem);
            ins(q,elem);
            break;

            case 2:
            del(q);
            break;

            case 3:
            disp(q);
            break;

            case 4:
            return 0;
            break;

            default:
            printf("INVALID CHOICE!!!");
        }

    }
}