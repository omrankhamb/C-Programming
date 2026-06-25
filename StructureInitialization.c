#include<string.h>

typedef struct Student
{
    char Name[20];
    int class;
}Student;



int main()
{
    Student s1 = {"Omprasad",21};
    printf("Name : %s\nAge : %d\n",s1.Name,s1.class);

    return 0;
}