#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
int i,n,m,j,choice;
char s[100],r[100];
clrscr();
	while(1){
		printf("\t\t\t\select opton\n");
		printf("1] print string length\n");
		printf("2] printing string in reverse order\n");
		printf("3] copy of string\n");
		printf("4] compairing two strings\n");
		printf("5] concatenation of two strings\n");
		printf("6] to exit\n");
		printf(" enter choice :");
		scanf("%d",&choice);
		if(choice==6){
		printf("exiting.....\n ");
		break;
		}
		else{
			switch(choice){
				case 1 :{
					printf("enter string :");
					scanf("%s",s);
					i=0;
					while(s[i]!='\0'){
					i++;
					}
					s[i]='\0';
					printf("string length is =%d\n",i);
					break;
				}
				case 2 :{
					printf("enter string :");
					scanf("%s",s);
					i=0;
					while(s[i]!='\0'){
					i++;
					}
					j=0;
					while(s[j] != '\0'){
					r[j]=s[i-j-1];
					j++;
					}
					r[j]='\0';
					puts(r);
					break;


				}
				case 3 :{
					printf("enter string to copy :");
					scanf("%s",s);
					i=0;
					while(s[i]!='\0'){
					r[i]=s[i];
					i++;
					}
					s[i]='\0',r[i]='\0';
					puts(s);
					puts(r);
					break;
				}
				case 4 :{
					printf("enter 1st string :");
					scanf("%s",s);
					printf("enter 2nd string :");
					scanf("%s",r);
					i=0;
					j=0;
					while(s[i] != '\0'){
					i++;
					}
					while(r[j] != '\0'){
					j++;
					}
					if(i>j){
					printf("1st string is greater");
					}
					else if(i==j){
					printf("strings are equal ");
					}
					else{
					printf("2nd string is greater");
					}
					break;
				}
				case 5 :{
					printf("enter 1st string :");
					scanf("%s",s);
					printf("enter 2nd string :");
					scanf("%s",r);
					i=0;
					while(s[i] != '\0'){
					i++;
					}
					j=0;
					while(r[j] != '\0'){
					s[i+j]=r[j];
					j++;
					}
					s[i+j]='\0';
					puts(s);
					break;
				}
			}
		}

	}

getch();
return 0;
}