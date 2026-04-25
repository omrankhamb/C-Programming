#include<stdio.h>

int main()
{
    int n;
    printf("enter a number. ");
    scanf("%d", &n);
    // codition n>0 and 
    int count =0;
    while(n!=0){
    n= n/ 10;
    count++;
    }
    printf("The no of digits are %d,",count);
    return 0;
}