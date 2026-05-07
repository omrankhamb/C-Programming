#include<stdio.h>
// decimal to binary
int dtb(int dec){
int bin[16];
int i=0,j=0;
	printf("dec =%d\n",dec);
	while(dec>0){
	bin[i]= dec%2;
	dec=dec/2;
	i++;
	}
	i--;
	while(i>=0){
		printf("%d",bin[i]);
		i--;
	}
	return 0;
}

// binary to decimal
int btd(int bin){
int dec=0;
int pow=1;
int cr;
int i=0;
	while(bin>0){
	cr=bin%10;
	bin=bin/10;
	if(i==0){
		dec = dec+ 1*cr;
		i++;
		continue;
	}
	else{
	pow=pow*2;
	dec = dec+pow*cr;
	}

	}
	printf("%d",dec);
	return 0;
}
int main(){
int bin;
int dec=0;
int count=0;
int choice;
clrscr();
	while(1){
		printf("\t\t\t\t\"MENU\"\n");
		printf("1] enter 1 decimal to binary\n");
		printf("2] binary to decimal\n");
		printf("3] to exit\n");
		printf(" enter choice :");
		scanf("%d",&choice);
		if(choice==3){
			printf("exiting......");
			break;
		}
		else{
			switch(choice){
				case 1:{
					printf("enter decomal number :");
					scanf("%d",&dec);
					dtb(dec);

					break;
				}
				case 2 :{
					printf("enter binary number :");
					scanf("%d",&bin);
					btd(bin);
					break;
				}
			}
		}
	}
getch();
return 0;
}
