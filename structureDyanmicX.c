#include<stdio.h>
#include<stdlib.h>

typedef struct Student
{
    int Age;
    int Class;
}Student;



int main()
{
    int iSize = 0;
    printf("Enter Size : \n");
    scanf("%d",&iSize);
    
    Student *s1 = (Student*)malloc(sizeof(Student)* iSize);


    printf("Enter Student Details  : \n");

    for(int i = 0 ;i < iSize ; i++)
    {
        scanf("%d %d",&((*(s1+i)).Age),&((*(s1+i)).Class));
    }

    printf("Entered details : ");

    for(int i = 0 ;i < iSize ; i++)
    {
        printf("%d %d\n",((*(s1+i)).Age),((*(s1+i)).Class));
    }
    return 0;
}
