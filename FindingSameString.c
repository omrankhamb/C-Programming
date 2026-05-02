#include<stdio.h>
int call(char *s1[],char *s2[]){
int i=0;
while(s1!='\0' || s2!='\0'){
if(s1[i]!=s2[i] || s1[i]-s2[i]!=32 || s2[i]-s1[i]!=32){
    return 1;}
     i++;
}
return 0;

}
int main()
{
char str[20],str1[20];
gets(str);
gets(str1);

int n=call(str,str1);
if(n==1)
printf(" equal");
else
printf(" not equal");

    return 0;
}