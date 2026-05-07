#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
FILE *p1;
FILE *p2;
char ch;
int i=0;
char s[200];
clrscr();
p1 = fopen("present.txt","a");

if(p1==NULL){
	printf("memory is not allocated \n");
}
else{
	printf("neter string you want to print \n");
	gets(s);
	while(s[i]!='\0'){
		fputc(s[i++],p1);
	}
}
	fclose(p1);

	p2 = fopen("present.txt","r");
       printf("printing string :\n");
	while((ch=fgetc(p2))!=EOF){
		printf("%c",ch);
		}

	fcloseall();


getch();
return 0;
}
