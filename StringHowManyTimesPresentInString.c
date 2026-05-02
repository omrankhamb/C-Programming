#include<stdio.h>

int main()
{
char str[100],word[50],temp[20];
gets(str);
printf("enter word");
gets(word);
int i=0,j=0,count=0;

while(str[i]!='\0'){

     while(str[i]!=' ' && str[i]!='\0'){
              temp[j]=str[i];
              i++;
              j++;
     }
         temp[j]='\0';
         if(str[i]!='\0'){
         i++;
         j=0;
         }

if(strcmp(temp,word)==0){

count++;
}
}
printf("%d",count);
    return 0;
}