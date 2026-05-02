#include<stdio.h>

int main()
{
char s[50],s1[10];
printf("enterstring ;");
gets(s);
printf("enter string to find");
gets(s1);
int i=0,j=0;
while(s[i]!='\0'){
if(s[i]==s1[j]){
printf("%c",s1[j]);
 i++,j++;
}
else
i++;
}
    
    return 0;
}