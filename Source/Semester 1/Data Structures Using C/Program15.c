/*

Develop a program to simulate the working of a stack.

Author : Sukruth BK
Date   : 14-April-2021

*/

#include <stdio.h>
int stack[10],i,choice,n,top=-1;

void push ()
{
    int val;
    if (top == n )
        printf("\n Overflow");
    else
    {
        printf("\nEnter the value:");
        scanf("%d",&val);
        top = top +1;
        stack[top] = val;
    }
}

void pop ()
{
    if(top == -1)
        printf("Underflow");
    else
        top = top - 1;
}

void show()
{
    if(top == -1)
        printf("Stack is empty");
    else
    {
        printf("\nYour Stack is:\n");
        for (i=top;i>=0;i--)
            printf("%d\n",stack[i]);
    }    
}

int main ()
{
    printf("Enter the number of elements in the stack: ");
    scanf("%d",&n);
    while(1)
    {
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                show();
                break;

            case 4:
                return 0;

            default:
                printf("Please Enter valid choice ");
        }
    }

    return 0;
}