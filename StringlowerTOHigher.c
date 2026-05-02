#include<stdio.h>
char strlwr(char s1[]){
int i=0;
while(s1[i]!='\0'){
s1[i]=s1[i]+32;
i++; 
} 
s1[i]='\0';
return s1;
}
int main()
{
char s1[40];
gets (s1);
strlwr(s1);
puts(s1);
    return 0;
}