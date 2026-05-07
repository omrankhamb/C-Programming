#include<stdio.h>
#include<stdlib.h>


int main(){
	int arr[100];
	int choice,i;
	int *p1;
	int *p2;
	int n,m;
	clrscr();
		while(1){
			printf("\t\t\t\t\"MENU DRIVEN\"\n");
			printf("1] printing array using pointer\n");
			printf("2] printing array using dynamic memory allocation\n");
			printf("3] to exit.........\n");
			printf("enter choice : \n");
			scanf("%d",&choice);
			if(choice == 3){
				printf("exiting from menu......\n");
				break;
			}
			else{
				switch(choice){
					case 1 :{
						printf("enter size of array :");
						scanf("%d",&n);
						p1=arr;
						printf("enter array :");
						for(i=0 ; i<n ; i++){
						scanf("%d",&p1[i]);

						}
						printf("printing array :\n");
						for(i=0 ; i<n ; i++){
						printf("%d ",p1[i]);

						}
						break;

					}
					case 2 :{
						printf("enter size : ");
						scanf("%d",&m);
						p2=(int*)malloc(m*sizeof(int));
						if(p2 == NULL){
							printf("memory is not allocated \n");
						}
						else{
						printf("enter value of array :");
						for(i=0 ; i<m ; i++){
							scanf("%d",&p2[i]);
						}
						printf("printing array :");
						for(i=0 ; i<m ; i++){
							printf("%d ",*(p2+i));
						}
						printf("\n");
						}
						break;
					}

				}
			}





		}

	getch();
	return 0;
	}