#include<stdio.h>
#include<conio.h>
#include<stdio.h>

int main(){
FILE *ptr;
FILE *ptr1;
char ch;
	clrscr();
	ptr =fopen("om.txt","r");
	ptr1 = fopen("write.txt","a");

	if(ptr==NULL || ptr1==NULL){
		printf("memory space is not allocated");
	}
	else{
		while((ch=fgetc(ptr))!=EOF){
			fputc(ch,ptr1);
		}
		fcloseall();

	}
	getch();
	return 0;

}