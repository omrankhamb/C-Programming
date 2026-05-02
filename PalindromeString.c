#include<stdio.h>
#include<string.h>

int main()
{
    char s[20];
    int flag=0;
    printf("enter string :");
    gets(s);
    puts(s);
    int j=strlen(s);
    int i=0;
    while(s[i]!='\0') {
        printf("%c",s[i]);
        printf("%c",s[j-i-1]);
        if(s[i]!=s[j-i-1]) {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1) {
        printf("\nnot palindrome");
    }
    else{
        printf("\npalindrome");
        }
    return 0;
}