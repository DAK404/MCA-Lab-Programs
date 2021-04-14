/*

Develop a program using pointers to compute the sum, mean, and standard deviation of all elements stored in the array of n real numbers.

Author : Sukruth BK
Date   : 14-April-2021

*/

#include<stdio.h>
#include<math.h>

int main()
{
    float a[50], *ptr, sum, mean, std, variance, sumstd;
    int n, i;
    
    printf("Enter the Array size:\n");
    scanf("%d", &n);
    
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%f", &a[i]);
    
    sum = 0;
    sumstd = 0;
    ptr = a;
    
    for(i=0;i<n;i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    
    mean = sum / n;
    ptr = a;
    
    for(i=0;i<n;i++)
    {
        sumstd = sumstd + pow((*ptr - mean), 2);
        ptr ++;
    }
    
    variance = sumstd / n;
    std = sqrt(variance);

    printf("Sum value is %f\n", sum);
    printf("Mean value is %f\n", mean);
    printf("Standard Deviation is %f\n", std);
    
    return 0;
}