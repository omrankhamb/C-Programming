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
    void *ptr = &s1;

    (*(Student*)ptr).a = 'O';
    (*(Student*)ptr).Age = 32;

    printf("Blood is : %c\n",((*(Student*)ptr).a));
    printf("Age is : %d",(*(Student*)ptr).Age);
    return 0;
}