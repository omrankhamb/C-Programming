#include<stdio.h>

int main()
{
    float n;
    printf("enter number :");
    scanf("%f", &n);
    float a =100;
    for(float i=1 ; i<=n ;i++){
    printf("%f \n", a);
    a=a*0.5;}
    printf("Hello world!");
    return 0;
}