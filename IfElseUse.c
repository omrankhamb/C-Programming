#include<stdio.h>

int main()
{
    int age;
    printf("enter age\n");
    scanf("%d\n",&age);
    if(age>18){
    printf("adult\n");}
    else{
    printf("child\n");}
    printf("Hello world!\n");
    return 0;
}