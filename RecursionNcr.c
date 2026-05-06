#include<stdio.h>
int factorial(int n) {// creating function
    if(n==1 || n==0)return 1;// base case
    return n*factorial(n-1);// code
}
int combination(int n,int r){
     int ncr=(factorial(n))/(factorial(r)*factorial(n-r));
     return ncr;

}
int main()
{
    int n,r ;
    printf("enter a number n an r");
    scanf("%d %d",&n,&r);
    int fact=combination(n,r);
    printf("%d",fact);


    return 0;
}