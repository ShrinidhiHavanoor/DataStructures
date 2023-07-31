#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int info;
    struct tree *llink,*rlink;
};
typedef struct tree *NODE;
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct tree));
    if(x==NULL)
    {
        printf("Out Of Memory!");
        return NULL;
    }
    x->llink=NULL;
    x->rlink=NULL;
    return x;
}
NODE insert(NODE root,int elem)
{
    if(root==NULL)
    {
        printf("Inserted node successfully!");
        root->info=elem;
        return root;
    }
    if(root->info==elem)
    {
        root->info=elem;
        printf("Inserted node successfully!");
        return root;
    }
    if(root->info>elem)
    insert(root->llink,elem);
    if(root->info<elem)
    insert(root->rlink,elem);
}
void search(NODE root,int key)
{
    if(root==NULL)
    {
        printf("Root is empty!");
    }
    NODE parent=root;
    if(root->info==key)
    {
        printf("Key is found!");
        printf("The parent of the key is:-%d",parent->info); 
    }
    if(root->info>key)
    search(root->llink,key);
    else
    search(root->rlink,key);
}
void preorder(NODE root)
{
    if(root==NULL)
    {
    printf("Tree Empty!");
    return ;
    }
    printf("%d,",root->info);
    preorder(root->llink);
    preorder(root->llink);
}
void postorder(NODE root)
{
    if(root==NULL)
    {
        printf("Tree Empty!");
        return ;
    }
    postorder(root->llink);
    postorder(root->rlink);
    printf("%d,",root->info);
}
void inorder(NODE root)
{
    if(root==NULL)
    {
        printf("Tree Empty!");
        return ;
    }
    inorder(root->llink);
    printf("%d,",root->info);
    inorder(root->rlink);
}
void main()
{
    NODE r=NULL;
    int ch,elem;
    while(1)
    {
        printf("\n----------------------------------------\n------MENU------\n");
        printf("1.Insert\n2.Search\n3Preorder Traversal\n");
        printf("4.Postorder Traversal\n5.Inorder Traversals\n");
        printf("Enter Your Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the element to insert:");
            scanf("%d",&elem);
            r=insert(r,elem);
            break;

            case 2:
            printf("Enter the key to find:");
            scanf("%d",&elem);
            search(r,elem);
            break;

            case 3:
            preorder(r);
            break;

            case 4:
            postorder(r);
            break;

            case 5:
            inorder(r);
            break;

            case 6:
            exit(0);
            break;

            default:
            printf("INVALID CHOICE!");
        }
    }
}