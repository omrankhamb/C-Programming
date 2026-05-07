#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
FILE *p1;
int i=0;
char s[1000];
	clrscr();
	p1 = fopen("writing.txt","w");
	if(p1 == NULL){
	printf("space is not allocated");
	}
	else{
		printf("enter data to store :");
		gets(s);
		i=0;
		while(s[i]!='\0'){
			fputc(s[i++],p1);
		}

}
	getch();
	return 0;
}