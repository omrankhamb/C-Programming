#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct Student
{
    char Arr[20];
    int RollNo;
}Student;



int main()
{

    Student s1;              // Static declaration
    printf("Enter name : ");
    scanf("%[^'\n']s",s1.Arr);

    printf("Enter Roll No : ");
    scanf(" %d",&s1.RollNo);


    printf("Name : %s\n",s1.Arr);
    printf("Roll No :  %d\n",s1.RollNo);
    return 0;
}