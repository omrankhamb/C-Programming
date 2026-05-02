#include<stdio.h>
char* call(char str[],int ch){
int i=0;
while(str[i]!='\0'){
if(str[i]==ch)
return i;
i++;
}
}
int main()
{
char str[30],ch;
gets(str);
printf("enter char ;");
scanf("%c",&ch);
printf("%d",call(str,ch));

    return 0;
}