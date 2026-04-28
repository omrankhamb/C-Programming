#include<stdio.h>

int main()
{// reversing array
char str1[200],str2[200];
gets(str1);
int i=0;
int n=strlen(str1);
while(str1[i]!='\0'){
        if(str1[i]!='\0'){
        str2[i]=str1[n-i-1];
        i++;
        }
       
}
puts(str2);
    printf("Hello world!");    return 0;
}