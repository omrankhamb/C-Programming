#include<stdio.h>
#include<conio.h>

int main(){
char ch;
char str[200];
int i;
int loc=0;
FILE *ptr ;
	clrscr();
	ptr =fopen("abc.txt","r+");
	if(ptr==NULL){
		printf("space is not allocated");
	}
	else{
		fseek(ptr,0L,SEEK_END);
		loc = ftell(ptr);
		printf("total lenght =%d",loc);
		printf("replace the string :");
		scanf("%s",str);
		i=0;
		while(str[i]!='\0'){
		fseek(ptr,i,SEEK_SET);
			fputc(str[i],ptr);
			i++;
		}



	}
	getch();
	return 0;
}