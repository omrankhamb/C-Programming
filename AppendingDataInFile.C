	#include<stdio.h>
int main(){
FILE *p;
FILE *p1;
char ch;
int loc;
int i=0;
char str[1000];
	clrscr();
	p = fopen("wrt.txt","r");
	p1 = fopen("wrt.txt","a");

	if( p == NULL ){
		printf("space is not allocated");
	}
	else{
		printf("data is reading from wrt.txt\n");
		while((ch=fgetc(p))!=EOF){
			printf("%c",ch);
		}
		fseek(p,0L,SEEK_END);
		loc = ftell(p);
		printf(" \npointer is at location %d \n ",loc);
		printf("enter string to appen in file :");
		gets(str);
		i=0;
		while(str[i]!='\0'){
			fputc(str[i],p1);
			i++;
		}



	fcloseall();
	}
	getch();
	return 0;
}