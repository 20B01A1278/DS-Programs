#include <stdio.h>
#define N 10
int stack[N];
int top = -1 ;
void push(int);
int pop();
int peek();
void display();
void isfull();
void isempty();
void init_fun();
int main()
{
    int n , ele;
    printf("Hello! nice to meet you.\n");
    do{
        printf("1.Push\n 2.Pop\n 3.Peek\n 4.isfull\n 5.isempty\n 6.intialize\n 7.display\n 8.Exit\n");
        printf("Please,choose an option!\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("enter the element:\n");
                scanf("%d",&ele);
                push(ele);
                break;
            case 2:
                ele = pop();
                if (ele != -1)
                        printf("the element is %d\n",ele);
                break;
            case 3:
                ele = peek();
                if (ele != -1)
                        printf("the top most element is %d\n",ele);
                break;
            case 4:
                isfull();
                break;
            case 5:
                isempty();
                break;
            case 6:
                init_fun();
                break;
            case 7:
                display();
                break;
            case 8:
                printf("Program completed,\nThank you for visiting!\n");
                break;
            default:
                printf("Please enter a valid number!\n");
                break;

        }

    }while(n != 8);
}
void push(int ele)
{
    if (top != N-1)
    {
        top += 1;
        stack[top] = ele;

    }
    else
    {
        printf("stack is full");
    }
}
int pop()
{
    int ele;
    if (top != -1)
    {
        ele = stack[top];
        top -= 1;
        return ele;
    }
    else
    {
        printf("underflow\n");
        return -1;
    }
}
int peek()
{
    int ele;
    if (top != -1)
    {
        ele = stack[top];
        return ele;
    }
    else
    {
        return -1;
    }
}
void isfull()
{
    if (top == N-1)
    {
        printf("stack is full\n overflow condition\n");
    }
    else
    {
        printf("stack is not full\n");
    }
}
void isempty()
{
    if (top == -1)
    {
        printf("stack is empty\n underflow condition\n");
    }
    else
    {
        printf("stack is not empty\n");
    }
}
void init_fun()
{
    printf("initializing the stack\n");
    top = -1;
}
void display()
{
    int i;
    for(i = top; i>=0 ; i--)
    {
        printf("%d\t",stack[i]);
    }
}

