#include<stdio.h>

int main()
{
char a[40];
int count=0;
printf("enter a string\n");
scanf("%[^\n]s\n",a);
    printf("the size is\n");
    int i=0;
    while(a[i]!='\0'){
    count++;
    i++;
    }
    for(int i=0,j=count-1;i<=j;i++,j--){
    char temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    }
    printf("reverse string is\n");
    puts(a);
    return 0;
}