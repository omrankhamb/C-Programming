#include<stdio.h>
int factorial(int x){
int fact =1;
for(int i=1 ; i<=x ; i++)
fact =fact *i;
return fact;
}
int main()
{
double sum=0.00;
for(int j=1 ; j<=7 ; j++){
sum +=(double)j/factorial(j);
}
    printf("sum is %f",sum);
    return 0;
}