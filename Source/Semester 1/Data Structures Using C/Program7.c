/*

Develop a program to swap 2 variable values using call by value and call by reference.

Author : Deepak Anil Kumar (https://github.com/DAK404/)
Date   : 14-April-2021

*/

#include<stdio.h>

int temp=0;
void refSwap(int *c, int *d)
{
    printf("Call by reference demo\n");
    printf("Before Swapping\na: %d\nb: %d\n", *c, *d);
    temp = *c;
    *c = *d;
    *d = temp;
    printf("Swapped Values are\na: %d\nb: %d\n", *c, *d);
}

void valSwap(int e, int f)
{
    printf("Call by value demo\n");
    printf("Before swapping\na: %d\nb: %d\n", e, f);
    temp = e;
    e = f;
    f = temp;
    printf("Swapped Values are\na: %d\nb: %d\n", e, f);
}

int main()
{
    int a, b;
    printf("Enter 2 values to be swapped:\n");
    scanf("%d%d", &a, &b);
    valSwap(a, b);
    refSwap(&a, &b);

    return 0;
}