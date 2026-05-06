#include<stdio.h>
#include<string.h>
char strrevd(char *s1,char *s2,int x){
int i=0;
while(s1[i]!='\0'){
s2[x+1-i]=s1[i];
i++;
}
puts(s2);
return s2;
}

int main()
{
  char str1[10];
  int n;
  n=strlen(str1);
    char str2[20];
    printf("enter 1st string\n");
    gets(str1);
    strrevd(&str1,&str2,n);
    printf("%s",str2);
    return 0;
}