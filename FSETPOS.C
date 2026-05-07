#include<stdio.h>
#include<conio.h>

int main(){
char ch;
int loc=0;
FILE *ptr ;
	clrscr();
	ptr =fopen("fgetpos.txt","r+");
	if(ptr==NULL){
		printf("space is not allocated");
	}
	else{
	fgetpos(ptr,&loc);
	loc += 18;
	fputc('25',ptr);



	}
	fcloseall();
	getch();
	return 0;
}