#include<stdio.h>
#include<stdlib.h>

void main(){
int *ptr;
int n,i;
clrscr();
printf("enter number n:");
scanf("%d",&n);
ptr =(int*)calloc(n,sizeof(int));
	for(i=0 ; i<n ; i++){
		scanf("%d",&ptr[i]);
	}
	printf("calloc stored :");
	for(i=0 ; i<n ; i++){
		printf("%d ",ptr[i]);
	}
getch();
}