#include<stdio.h>
#include<malloc.h>
struct tnode{
    struct tnode *left;
    int data;
    struct tnode *right;
};

void insert(struct tnode *tree , int val);
int main()
{
    struct tnode *tree;

    int val;
    printf("enter the element to be inserted:");
    tree = ((struct tnode*)malloc(sizeof(struct tnode)));

    scanf("%d",&val);
    tree ->left = NULL;
    tree -> right = NULL;
    insert(tree , val);
    return 0;
}
void insert(struct tnode *tree , int val)
{

    if(tree == NULL)
    {
        tree -> data = val;
        tree ->left = tree ->right = NULL;

    }
    else if(val < tree -> data)
    {
        insert(tree ->left , val);
    }
    else
    {
        insert(tree -> right , val);
    }
    printf("%d is inserted",tree ->data);


}
