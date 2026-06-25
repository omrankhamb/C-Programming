#include<stdio.h>

int Add(int x,int y)
{
    return x+y;
}

typedef struct  Student
{
    int (*Addition)(int , int);
    char Name[20];
    int age;
    
}Student;



int main()
{
    printf("Omprasad");
    Student s1 = {Add};
    int x = s1.Addition(4,5);
    printf("Addition is  : %d",x);

    return 0;
}