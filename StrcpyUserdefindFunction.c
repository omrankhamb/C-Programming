#include<stdio.h>
#include<string.h>
char call(char *st,char *s1){
int i=0;
while(st[i]!='\0'){
s1[i]=st[i];
i++;
}
printf("copeid string is \n");
printf("%s",s1);
}
int main()
{
char str[10]={"omprasad"};
char s2[20];
printf("the source string is:\n");
printf("%s\n",str);
call(&str,&s2);

    return 0;
}