/*

Develop a program to insert and delete an element from an array from the desired position

Author : Deepak Anil Kumar (https://github.com/DAK404/)
Date   : 14-April-2021

*/

#include <stdio.h>

int main()
{
    int a[100], size, choice, pos, ele, i;
    printf("Enter Array Size : ");
    scanf("%d", &size);
    printf("Enter array elements: \n");
    for( i=0 ; i < size ; i++ )
        scanf("%d", &a[i]);
    while(1)
    {
        printf("\n1. Display Array Elements\n2. Insert Element\n3. Delete Element\n4. Exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                    printf("\n");
                    for ( i=0; i < size; i++ )
	                    printf("%d ", a[i]);
                    printf("\n");
                    break;

            case 2:
                    printf("Enter position of element to be inserted : ");
                    scanf("%d", &pos);
                    printf("Enter Element to be Inserted: ");
                    scanf("%d", &ele);
                    for( i = size-1 ; i >= pos-1 ; i-- )
                        a[i+1]=a[i];
                    a[pos-1]=ele;
                    printf("Element Inserted Successfully!");
                    break;

            case 3:
                    printf("Enter position of element to be deleted : ");
                    scanf("%d", &pos);
                    for( i = pos-1 ; i < size; i++ )
                        a[i] = a[i+1];
                    a[size-1]=0;
                    printf("Element Deleted Successfully!");
                    break;

            case 4:
                    return 0;

            default:
                    printf("Enter A Valid Choice.");

        }
    }
    return 0;
}
