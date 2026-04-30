#include<stdio.h>

int main()
{
    int n;
    printf("enter a number to verify number is strong or not :");
    scanf("%d",&n);
    int m=n;
    int digit;
    int fact;
    int sum=0;
    while(n>0) {
        digit =n%10;
        fact=1;
        for(int i=digit ; i>=1; i--) {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(m==sum)
        printf("%d is a strong number",m);
    else
        printf("%d not a strong number",m);
    return 0;
}