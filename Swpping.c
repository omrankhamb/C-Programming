#include<stdio.h>

int main()
{
int number1,number2,number3;
printf("enter numbers\t");
scanf("%d%d",&number1,&number2);
number3=number1;
number1=number2;
number2=number3;
printf("number after swap %d %d",number1, number2);


return 0;
}