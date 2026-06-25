#include<stdio.h>
#include<string.h>
typedef struct  Student
{
    
    char Name[20];
    int age;
    
}Student;



int main()
{
    Student s1;
    char Arr[20];

    printf("Enter Name : ");
    scanf("%[^'\n']s",Arr);
    strcpy(s1.Name,Arr);
    printf("Enter Age : ");
    scanf("%d",&s1.age);

    printf("Name is : %s",s1.Name);
    printf("Age is : ",s1.age);
    

    return 0;
}