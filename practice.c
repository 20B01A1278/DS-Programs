#include <stdio.h>
#include <malloc.h>
int *first = NULL;
int *last = NULL;
void push();
void display();
struct NODE
{
    int rnum;
    int marks;
    struct NODE *next;
};
struct NODE *newnode;
void main()
{

    int n , i =1;
    printf("enter number of students:");
    scanf("%d",&n);
    while(i <= n)
    {
        insert();
        i++;
    }
    display();


}
void insert()
{

    newnode = (struct NODE *)malloc(sizeof(struct NODE));
    printf("enter student roll number:");
    scanf("%d",&newnode ->rnum);
    printf("enter student marks:");
    scanf("%d",&newnode ->marks);
    if(first == NULL)
    {
        first = last = newnode;
    }
    else
    {
        newnode -> next = NULL;
        last -> next = newnode;
        last = newnode;

    }

}
void display()
{
    int *temp = first;

    while(temp != NULL)
    {
        printf("student roll number : %d",temp->rnum);
        printf("student marks : %d",temp-> marks);
        temp = temp -> next;
    }
}
