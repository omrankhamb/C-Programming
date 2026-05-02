#include<stdio.h>
char* call(char str[],int ch){
int i=0;
while(str[i]!='\0'){
str[i]=ch;
i++;
}
return str;
}
int main()
{
char str[30],ch='c';
gets(str);
call(str,ch);
puts(str);
    return 0;
}