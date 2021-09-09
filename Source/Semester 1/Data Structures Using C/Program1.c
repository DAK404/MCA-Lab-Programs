/*

Develop a program to compute the roots of a given quadratic equation. by accepting coefficients.

Author : Deepak Anil Kumar (https://github.com/DAK404/.)
Date   : 14-April-2021

*/

#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, discriminant, root1, root2;
    printf("Enter the coefficients of a, b, c:\n");
    scanf("%lf%lf%lf",&a, &b, &c);

    discriminant = b * b - (4 * a * c);

    if ( discriminant > 0 )
    {
        root1 = ( -b + sqrt(discriminant) / ( 2 * a ) );
        root2 = ( -b - sqrt(discriminant) / ( 2 * a ) );
        printf("\nRoot1 : %lf\nRoot2 : %lf\n", root1, root2);
    }
    else if ( discriminant == 0 )
    {
        root1 = -b / ( 2 * a );
        printf("\nRoots are equal\nRoots : %lf\n", root1);
    }
    else
    {
        root1 = -b / ( 2 * a );
        root2 = sqrt(-discriminant) / ( 2 * a );
        printf("\nRoot1 = %lf + %lf\nRoot2 = %lf - %lf\n", root1, root2, root1, root2);
    }

    return 0;
}