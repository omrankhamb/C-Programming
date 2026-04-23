//gcd recursion 
#include<stdio.h>
int gcd(int a,int b){
    int result=((a<b)?a:b);//ternary operator
    while(result>0){
    if(a%result==0 && b%result==0){
    break;
    }
    result--;
    }
return result;
}
int main()
{
int x,y;
printf("enter number a,b");
scanf("%d  %d",&x ,&y);
printf("%d %d gcd is %d",x,y,gcd(x,y));

    printf("Hello world!");
    return 0;
}