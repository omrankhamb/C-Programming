#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter a");
    scanf("%d",&a); 
    
    printf("enter b");
    scanf("%d",&b);
    
    printf("enter c");
    scanf("%d",&c);
    
    if(a>b && a>c){
    printf("%d \n",a);}
    if(b>c && b>a){
    printf("%d \n",b);}
    if(c>a && c>b)
    printf("%d \n",c);
    return 0;
}