#include<stdio.h>

int main()
{
    int num,digit,remain;
    int sum=0;
    printf("enter number n");
    scanf("%d",&num);

    remain=num%10;
    digit=num/10;
    sum=remain*remain*remain;

    remain=digit%10;
    digit=digit/10;
    sum=sum+remain*remain*remain;

    remain=digit%10;
    digit=digit/10;
    sum=sum+remain*remain*remain;

    if(sum==num)
            printf("number is armstrong %d",sum);

         
            return 0;
}