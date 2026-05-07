#include<stdio.h>
int main(){
//pointer to an array
	int a[5]={10,20,30,40,50};
	int (*ptr)[5]=&a;
	int i;
clrscr();

	for(i=0 ; i<5 ; i++){
		printf("%d ",(*ptr[i]));
	}

getch();
return 0;

}