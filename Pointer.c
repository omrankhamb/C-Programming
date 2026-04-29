#include<stdio.h>
int sumn(int* x){
    int sum=0;
    for(int i=1 ;i<=*x ; i++)
    sum=sum+i;
    return sumn;
}

int main()
{
int a;


printf("enter n");
scanf("%d",&a);
     int y =sumn(&a);
     printf("%d",y);


    
    return 0;
}