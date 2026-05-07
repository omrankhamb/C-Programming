#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
float *ptr;
char c;
clrscr();
ptr = fopen("om.txt","r");
if(ptr==NULL){
printf("space is not allocted");
}
else{
	printf("%c\n",fgetc(ptr));
	while((c=fgetc(ptr))!=EOF){
		printf("%c",c);
	}
	fclose(ptr);
}
getch();
return 0;
}