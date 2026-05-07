#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(){
	int i=0;
	typedef struct name{
		char name[20];
		int rollno;
	}name;
	name student[5];
	clrscr();

	for(i=0 ; i<5 ; i++){
		printf("enter name :");
		gets(student[i].name);
	}
	for(i=0 ; i<5 ; i++){
	puts(student[i].name);
	}

	for(i=0 ; i<5 ; i++){
	      scanf("%d",&student[i].rollno);
	}

	for(i=0 ; i<5 ; i++){
	printf("%d\n",student[i].rollno);
	}

getch();
return 0;
}