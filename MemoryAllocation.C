#include<stdio.h>
#include<stdlib.h>

int main(){
int *ptr;
int n,i;
clrscr();
	printf("enter number n:\n");
	scanf("%d",&n);
	printf("enter pointer values :\n");
ptr=(int*)malloc(n*sizeof(int));
	for(i=0 ; i<n ;i++){
		scanf("%d",&ptr[i]);
	}
	printf("printing pointer values :");
	for(i=0 ; i<n ; i++){
		printf("%d ",ptr[i]);
	}
	 printf("\n");
	 getch();
	 return 0;
}
