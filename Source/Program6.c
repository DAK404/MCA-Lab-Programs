/*

Develop a program to implement string operations such as compare, concatenate and string length.
(Use the different parameter passing techniques)

Author : Deepak Anil Kumar (https://github.com/DAK404/), Sukruth BK
Date   : 14-April-2021

*/

#include<stdio.h>
#include<string.h>

int stringLength(char *str)
{
    return strlen(str);
}

void compare(char *str1, char *str2)
{
    if ( strcmp(str1, str2) == 0 )
        printf("Strings are equal!\n");
    else
        printf("Strings are not equal!\n");
}

void concat(char str1[100], char str2[100])
{
    strcat( str1, str2 );
    printf("%s\n", str1);
}

int main()
{
    int i, choice;
    char a[100], b[100];

    printf("Enter 2 strings");
    scanf("%s", a);
    scanf("%s", b);

    while(1)
    {
        printf("\n1. String Compare\n2. String Concatenate\n3. String Length\n4. Exit\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                    compare(a, b);
            case 2:
                    concat(a, b);

            case 3:
                    printf("The 1st String length is: %d", stringLength(a));
                    printf("The 2nd String length is: %d", stringLength(b));
                    break;

            case 4:
                    return 0;
            
            default:
                    printf("Enter A Valid Choice.");
        }
    }

    return 0;
}