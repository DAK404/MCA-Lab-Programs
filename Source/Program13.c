/*

Develop a program to sort a list of n elements using quick sort.

Author : Deepak Anil Kumar (https://github.com/DAK404/)
Date   : 14-April-2021

*/

#include<stdio.h>

int i;

void quicksort(int *number,int first,int last)
{
    int j, pivot, temp;

    if( first < last )
    {
        pivot=first;
        i=first;
        j=last;

        while(i<j)
        {
            while( number[i] <= number[pivot] && i < last )
                i++;
            while( number[j] > number[pivot] )
                j--;
            if(i<j)
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
     
            temp=number[pivot];
            number[pivot]=number[j];
            number[j]=temp;
            quicksort(number,first,j-1);
            quicksort(number,j+1,last);

        }   
    }
}

int main()
{
    int size, number[25];

    printf("Enter array size: ");
    scanf("%d",&size);

    printf("Enter array elements:\n");
    for(i=0;i<size;i++)
        scanf("%d",&number[i]);

    quicksort(number,0,size-1);

    printf("Sorted array\n\n");
    for(i=0;i<size;i++)
        printf(" %d",number[i]);

    return 0;
}