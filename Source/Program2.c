/*

Develop a program to find the reverse of a positive integer and check for palindrome or not.

Author : Deepak Anil Kumar (https://github.com/DAK404/)
Date   : 14-April-2021

Additional Notes:

    - Issue : This logic will break if the number entered has a value ending with 0
    - Workaround : Try to use a number with a value that does not end with 0

*/

#include<stdio.h>

int main()
{
    unsigned int n, rem=0, rev=0, temp=0;
    printf("Enter a positive number: ");
    scanf("%u", &n);
    
    temp = n;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    
    printf("The reversed number is : %u\n", rev);

    if( rev == n )
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}