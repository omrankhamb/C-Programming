#include<stdio.h>

int main()
{
    int n =4;
    printf("enter a number. ");
    scanf("%d", &n);
    // codition n>0 and 
    int sum = 0;
    int lastdigit = 0;
    while(n!=0){
    {
    lastdigit = n%10;
    sum = sum +lastdigit;
    n=n/10;
    }
    }
    printf("The sum of digits are %d,",sum);
    return 0;
}// sum = sum of lsast digit