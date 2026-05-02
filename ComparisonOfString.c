#include<stdio.h>
int call(str[],str1[]){
int i=0;
while(str[i]!='\0' || str1[i]!='\0'){
if(str[i]!=str1[i])
return (str[i]-str1[i]);
i++;
}
return 0;

}
int main()
{
char str[20],str1[20];
gets(str);
gets(str1);
int res=call(str,str1);
if(res==0)
    printf("string are equal");
    else
    printf("are not equal");
    return 0;
}