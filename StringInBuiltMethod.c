#include<stdio.h>
int res(char* s1,char *s2,int n) {
    int i=0;
    while((s1[i]!='\0' || s2[i]!='\0')&&i<n) {
        if((s1[i]-s2[i])==32 || (s2[i]-s1[i])==-32 ||(s1[i]==s2[i]))
        i++;
        else
            return s1[i]-s2[i];
    }

return 0;
}
int main()
{
    char str1[20];
    printf("enterv1st string\n");
    gets(str1);

    char str2[20];
    printf("enter 2nd stringz \n");
    gets(str2);

    puts(str1);
    puts(str2);
    int n;
    printf("to check which number position is equal n :");
    scanf("%d",&n);
    int j=res(str1,str2,n);
    if(j==0) {
        printf("string portions atre equal");
    }
    else printf("string portins are not equal");
    return 0;
}