#include<stdio.h>
int main(){
	int a=5,b=6,c=7,d=8,e=9;
	int *p[4] ={&a,&b,&c,&d,&e};
	int i;
clrscr();


	for(i=0 ; i<5 ; i++){
		printf("%d",*p[i]);
	}
getch();
return 0;
}