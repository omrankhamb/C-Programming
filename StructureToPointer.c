#include<stdio.h>
#include<stdlib.h>


typedef struct Student
{
    char a;
    int Age;
}Student;


int main()
{
    Student s1;
    Student *ptr = &s1;

    ptr->a = 'O';
    ptr->Age = 32;

    printf("Blood is : %c\n",ptr->a);
    printf("Age is : %d",ptr->Age);
    return 0;
}