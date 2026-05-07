#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
FILE *f1,*f2;
long int loc1,loc2;
char ch;
clrscr();
	f1= fopen("om.txt","r");
	f2= fopen("write.txt","a");

	if(f1==NULL || f2==NULL){
	   printf("unable to continue");
	}
	else{
		loc1 = ftell(f1);
		loc2 = ftell(f2);
		printf("intially,indicators are located at %ld %ld\n",loc1,loc2);
		ch=fgetc(f1);
		fputc('!',f2);
		loc1 = ftell(f1);
		loc2 = ftell(f2);
		printf("by using ftell the pointer is at position %ld and %ld\n",loc1,loc2);
		ch=fgetc(f1);
		fputc('!',f2);
		fgetpos(f1,&loc1);
		fgetpos(f2,&loc2);
		printf("by uding fgetpos we can append %ld %ld",loc1,loc2);

		fcloseall();
	}
getch();
return 0;
}
