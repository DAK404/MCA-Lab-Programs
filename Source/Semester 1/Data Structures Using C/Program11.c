/*

Write a C program to implement the search techniques of linear search and binary search

Author : Deepak Anil Kumar (https://github.com/DAK404/)
Date   : 14-April-2021

*/

#include<stdio.h>

int main()
{
    int a[100], size, i, low=0, mid=0, high=0, search;

    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for( i = 0 ; i < size ; i++)
        scanf("%d", &a[i]);
    
    printf("Enter search element: ");
    scanf("%d", &search);

    printf("\nLinear Search\n");
    for( i = 0 ; i < size ; i++ )
        if( search == a[i] )
        {
            printf("Search element found at %d\n", i+1);
            break;
        }
    
    printf("\nBinary Search\n");
    
    high = size-1;
    mid = ( low + high ) / 2;

    while( low <= high )
    {
        if( a[mid] == search )
        {
            printf("Search element found at : %d\n", mid+1);
            break;
        }
        else if( a[mid] < search )
            low = mid + 1;
        else if( a[mid] > search )
            high = mid - 1;
        
        mid = ( low + high ) / 2;
    }

    return 0;
}