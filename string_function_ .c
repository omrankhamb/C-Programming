// transpose of array
#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,k=0,l=0,m=0,n=0,flag=0;
    char s[50],spy[50],s1[50],s2[50];
    clrscr();
    printf("enter string :");
    gets(s);
    while(s[i]!='\0') {
        i++;
    }
//_____________Printing length of string ________________
    printf("lenght of string equal to :%d\n",i);
//_____________original  string ___________________
    printf("original string  :%s\n",s);
//_____________reversing  string ___________________
    printf("reverse of string :");
    while(i>-1) {
        printf("%c",s[i]);
        i--;
    }
//copying string
    printf("\ncopy the string :");
    while(s[l]!='\0') {
        spy[l]=s[l];
        l++;
    }
    spy[l]='\0';
    puts(spy);
    printf("\n");
//entering two string
    printf("enter 1st string :");
    gets(s1);
    printf("enter 2nd string :");
    gets(s2);
    for(m=0,n=0 ; s1[m]!='\0',s2[n]!='\0'; m++,n++) {
        if(s1[m]!=s2[n]) {
            flag=1;
            break;
        }

    }
    if(flag==1) {
        printf("strings are not equal\n");
    }
    else {
        printf("string  are equal \n");
    }
    m=0,n=0;
    while(s1[m]!='\0' || s2[n]!='\0') {
        if(s1[m]!='\0') {
            m++;
        }
        if(s2[n]!='\0') {
            n++;
        }
    }
    if(m>n){
    printf("string 1st is greater in length\n");
    }
    else if(m==n){
    printf("string are equal in length\n");
    }
    else{
    printf("string 1st is smaller in length\n");
    }
    //-------------------concatenation of string________
    printf("concatenation of string\n");
    n=0;
    while(s2[n]!='\0'){
    s1[m+n]=s2[n];
    n++;
    }
    s1[m+n]='\0';
    puts(s1);
    getch();


    return 0;
}