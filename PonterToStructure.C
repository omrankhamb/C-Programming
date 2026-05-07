#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


typedef struct employ{
	int id;
	char name[30];
	int salary;
}employ;

int main(){

struct employ om;
struct employ *p;
int n,i;
clrscr();
printf("enter size of :");
scanf("%d",&n);
p=(employ*)malloc(n*sizeof(employ));

for(i=0 ; i<n ; i++){
	scanf("%d",&p[i].salary);
	printf("enter id :");
	scanf("%d",&p[i].id);
	printf("enter name :");
	scanf(" %s",p[i].name);

}

for(i=0 ; i<n ; i++){
	printf("%d\n",p[i].id);
	printf("%s\n",p[i].name);
	printf("%d\n",p[i].salary);
}



getch();
return 0;
}