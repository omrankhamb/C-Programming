#include<stdio.h>
#include<conio.h>

int main(){
char ch;
int i,j,k;
int loc=0;
FILE *ptr ;
	clrscr();
	ptr =fopen("abc.txt","r+");
	if(ptr==NULL){
		printf("space is not allocated");
	}
	else{
		while((ch=fgetc(ptr))!=EOF){
			printf("%c",ch);
		}
		fseek(ptr,0L,SEEK_END);
		loc = ftell(ptr);
		printf("\ntotal lenght =%d\n",loc);
		printf("enter to delete data from :");
		scanf("%d",&j);
		printf("to end of delete data");
		scanf("%d",&k);
		i=j;
		while(i<k){
		fseek(ptr,i,SEEK_SET);
			fputc(' ',ptr);
			i++;
		}

	}
	getch();
	return 0;
}