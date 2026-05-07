#include<stdio.h>

int main(){
int choice,sum=0,i;
float average;
clrscr();
	while(1){
		printf("\t\t\t\tmenu\n");
		printf("1] addition of 10 numbers using for loop\n");
		printf("2] average of 1st 10 numbers\n");
		printf("3] square of 1st 10 numbers\n");
		printf("4] enter 4 to exit\n");
		printf("enter choice :");
		scanf("%d",&choice);
		if(choice == 4){
			printf("exiting....");
			break;
		}
		else{
			switch(choice){
				case 1:{
					for(i=1 ; i<=10 ; i++){
					sum=sum+i;
					}
					printf("sum equal to =%d",sum);
					break;
				}
				case 2:{
					for(i=1 ; i<=10 ; i++){
					sum=sum+i;
					}
					average =(float)sum/10;
					printf("average equal to =%f",average);
					break;
				}
				case 3:{
					printf("square of 1st 10 numbers :");
					for(i=1 ; i<=10 ; i++){
						printf("%d ",i*i);
					}
					break;
				}
			}
		}

	}
getch();
return 0;
}