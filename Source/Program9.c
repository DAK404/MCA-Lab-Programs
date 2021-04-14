/*

Implement structures to read, write and compute the average marks and the student scoring above and below the average marks for a class of n students.

Author : Deepak Anil Kumar (https://github.com/DAK404/)
Date   : 14-April-2021

*/

#include<stdio.h>

struct student
{
    char name[100];
    int subj1;
    int subj2;
    double avg;
} student_info[100];

int main()
{
    int size, i = 0, class_avg=0;

    printf("Enter the number of students in class: ");
    scanf("%d", &size);

    for( i = 0 ; i < size ; i++ )
    {
        printf("Enter the student details.\n\n");
        printf("Student Name: ");
        scanf("%s", student_info[i].name);

        printf("Subject 1 marks: ");
        scanf("%d", &student_info[i].subj1);

        printf("Subject 2 marks: ");
        scanf("%d", &student_info[i].subj2);

        student_info[i].avg = ( student_info[i].subj1 + student_info[i].subj2 ) / 2;
        class_avg = class_avg + student_info[i].avg;
    }
    
    class_avg = class_avg/size;

    printf("\n\nResults\n-------\n\n");
    for( i = 0 ; i < size ; i++ )
    {
        printf("Student Name: %s\n", student_info[i].name);
        printf("Subject 1 marks: %d\n", student_info[i].subj1);
        printf("Subject 2 marks: %d\n", student_info[i].subj2);
        printf("Student Average: %lf\n", student_info[i].avg);

        if( student_info[i].avg >= class_avg )
            printf("Student has scored above class average\n\n");
        else
            printf("Student has scored below class average\n\n");
    }

    return 0;
}