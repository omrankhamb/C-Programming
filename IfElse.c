#include<stdio.h>

int main()
{
    int n;
    printf("enter number n \n");
    scanf("%d \n", &n);
    if(n>=0){
    printf("positive\n");
    }
    if(n%2==0){
    printf("n is even\n");}
    else{
    printf("n is negative");}
    printf("Hello world!");
    return 0;
}