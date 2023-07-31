#include <stdio.h>
#include <math.h>
#include <string.h>
#define max 200
int top=-1;
void push(int s[],int elem)
{
    if(top==max-1)
    printf("Stack Overflow");
    else
    s[++top]=elem;
}
void pop(int s[])
{
    if(top==-1)
    printf("Stack Underflow");
    else
    printf("Item Deleted:-%d",s[top--]);
}
void disp(int s[])
{
    if(top==-1)
    printf("Stack Underflow");
    else
    {
        printf("The elements of the Stack are:-");
        for(int i=0;i<=top;i++)
        printf("%d,",s[i]);
    }
}
int main()
{
    int ch,elem,s[max];
    while(1)
    {
        printf("\n----------------------------------------------------\n\n\n------MENU-------");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter Your Choice:-");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the element to push:-");
            scanf("%d",&elem);
            push(s,elem);
            break;

            case 2:
            pop(s);
            break;

            case 3:
            disp(s);
            break;

            case 4:
            return 0;
            break;

            default:
            printf("INVALID CHOICE");            
        }
    }
}