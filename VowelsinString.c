#include<stdio.h>

int main()
{
char str[200];
gets(str);
int i=0,count=0;
while(str[i]!='\0'){

if(str[i]=='A' || str[i]=='E' ||str[i]=='I'|| str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
count++;

i++;
}
    printf("%d vowels are present",count);
    return 0;
}