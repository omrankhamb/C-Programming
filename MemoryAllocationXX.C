#include<stdio.h>
#include<stdlib.h>
void main(){
int *ptr,*ptr2;
int n,i;
clrscr();
printf("enter number :");
scanf("%d",&n);

ptr=(int*)malloc(n*sizeof(int));
	for(i=0 ; i<n ; i++){
		scanf("%d",&ptr[i]);
	}
	for(i=0 ; i<n ; i++){
		printf("%d ",ptr[i]);
	}
	printf("\nrealloc");
	printf("enter number :");
	scanf("%d",&n);
	for(i=0 ; i<n ; i++){
		scanf("%d",&ptr[i]);
	}
	for(i=0 ; i<n ; i++){
		printf("%d ",ptr[i]);
	}
	getch();
}