#include<stdio.h>
#include<conio.h>

typedef struct student{
	int no;
	char name[30];
}student;


int main(){
	int i;
	student om[3];
clrscr();
	for(i=0 ; i<3 ; i++){
		gets(om[i].name);
	}

	for(i=0 ; i<3 ; i++){
		puts(om[i].name);
	}
getch();
return 0;
}

