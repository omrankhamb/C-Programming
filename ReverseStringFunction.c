#include<stdio.h>
char rev(char s1[],char s2[],int* n){
int i=0;
while(s1[i]!='\0'){
s2[i]=s1[*n-1-i];
i++;
}
return s2;
}
int main()
{// reversing array
char str1[200],str2[200];
gets(str1);
int n=strlen(str1);
rev(str1,str2,&n);
puts(str2);
    printf("Hello world!");    return 0;
}