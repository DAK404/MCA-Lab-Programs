/*

Develop a program to sort a list of n elements using insertion sort

Author : Deepak Anil Kumar (https://github.com/DAK404/)
Date   : 14-April-2021

*/

#include<stdio.h>

int main()
{
	int a[100], size, i, j, key;
    printf("Enter the array size: ");
    scanf("%d", &size);

    printf("Enter Array Elements:\n");
    for( i = 0 ; i < size ; i++ )
        scanf("%d", &a[i]);
    
    for (i = 1; i < size; i++ )
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key ) 
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
	}
    
    printf("Sorted Array:\n");
    for (i = 0 ; i < size ; i++ )
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}