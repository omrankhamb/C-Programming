#include<stdio.h>
#include<stdlib.h>

typedef struct Student
{
    int Age;
    int Class;
}Student;



int main()
{

    
    Student *s1 = (Student*)malloc(sizeof(Student));
    s1->Age = 24;
    s1->Class = 30;

    printf("Age : %d\n",(*s1).Age);
    printf("Class : %d\n",(*s1).Class);
    return 0;
}
