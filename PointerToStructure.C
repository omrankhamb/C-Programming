#include<stdio.h>
#include<string.h>

typedef struct student{
	char name[20];
	int rn;
}student;
int main(){
int i;
student one[3];
student *p;
p =&one;
clrscr();

for(i=0 ;i<3 ; i++){
	printf("enter name");
	scanf(" %s",(p+i)->name);
	scanf("%d",&(p+i)->rn);
}

for(i=0 ;i<3 ; i++){
	printf("%s \n",(p+i)->name);
	printf("%d\n",(p+i)->rn);

}


getch();
return 0;
}