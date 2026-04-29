//menu driven program
#include<stdio.h>

int main()
{
    int n,i,fact=1,count=0,choice;
    while(1) {
        printf("\n\t\t\t\"Menu\" \n");
        printf("selct the choice\n");
        printf("1].enter 1 to find factorial\n");
        printf("2].enter to find number is prime or not\n");
        printf("3].enter 3 to exit\n");
        printf("enter number: ");
        scanf("%d",&n);
        printf("enter choice:");
        scanf("%d",&choice);

        if(choice==3) {
            printf("exiting...");
            break;
        }
        else {
            switch(choice) {
            case 1 :
                fact=1;
                for(i=1 ; i<=n ; i++) {
                    fact=fact*i;
                }
                printf("%d",fact);
                break;
            case 2:
                count=0;
                for(i=1 ; i<=n ; i++) {
                    if(n%i==0) {
                        count++;
                    }
                }
                if(count==2) {
                    printf("number is prime");
                }
                else {
                    printf("number is not prime");
                }
                break;
            default :
                printf("not choose correct choice");






            }
        }

    }
    return 0;
}