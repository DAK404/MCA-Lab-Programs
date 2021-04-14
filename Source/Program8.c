/*

Implement recursive functions for binary to decimal number conversion.

Author : Deepak Anil Kumar (https://github.com/DAK404/)
Date   : 14-April-2021

*/

#include<stdio.h>

int convert(int n)
{
    if( n == 0 )
        return 0;
    else
        return ( n % 10 + 2 * convert(n/10) );
}

int main()
{
    int a;
    printf("Enter binary value: ");
    scanf("%d", &a);
    printf("Converted value in decimal is : %d", convert(a));

    return 0;
}