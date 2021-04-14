/*

Develop a program using recursion to calculate the GCD and LCM of 3 integers, towers of hanoi, calculate sum of n natural integers.

Author : Deepak Anil Kumar (https://github.com/DAK404/), Sukruth BK
Date   : 14-April-2021

*/

#include<stdio.h>

int gcd(int m,int n)
{
    if( n == 0 )
        return m;
    
    int rem;
    while( n != 0 )
    {
        rem = m % n;
        m = n;
        n = rem;
    }
    return m;
}

void toh(int n, int src, int temp, int dest)
{
    if(n==1)
        printf("\nMove from Stick %d to Stick %d", src, dest);
    else
    {
        toh(n-1,src,dest,temp);
        toh(1,src,temp,dest);
        toh(n-1,temp,src,dest);
    }
}

int addNumbers(int n) 
{
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}

int main()
{
    int a, b, c, choice, n, hcf, lcm, src=1, temp=2, dest=3;

    while(1)
    {
        printf("\n\n1. Find HCF and LCM of 3 numbers\n2. Tower Of Hanoi\n3. Sum of n natural numbers\n4. Exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                    printf("Enter 3 numbers:\n");
                    scanf("%d%d%d", &a, &b, &c);
                    hcf = gcd(c, gcd(a,b));
                    printf("hcf: %d\n", hcf);
                    printf("lcm: %d\n", (c * (a * b / hcf))/ gcd(c, (a * b / hcf)));
                    break;
                
            case 2:
                    printf("Enter the number of disks: ");
                    scanf("%d", &n);
                    toh(n, src, temp, dest);
                    break;

            case 3:
                    printf("Enter a natural number: ");
                    scanf("%d", &n);
                    printf("Sum: %d\n", addNumbers(n));
                    break;

            case 4:
                    return 0;

            default:
                    printf("Enter a valid option");
        }
    }

    return 0;
}

