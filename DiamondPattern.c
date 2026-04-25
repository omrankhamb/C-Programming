#include<stdio.h>

int main()
{
    int n;
    printf("enter number n:");
    scanf("%d",&n);
    printf("\n");
   
    for(int i=1 ; i<=n ; i++) {
     printf("");
        for(int k=1 ; k<=n-i+1 ; k++) {
            printf(" ");
        }

        for(int k=1 ; k<=i-1 ; k++) {
            printf("*");
        }
        for(int m=1 ; m<=i ; m++) {
            printf("*");
        }
        for(int j=1 ; j<=n-i+1 ; j++) {
            printf(" ");
        }
        printf("\n");
    }
    for(int i=1 ; i<=n ; i++) {
    printf("");
        for(int m=1 ; m<=i ; m++) {
            printf(" ");
        }
        for(int k=1 ; k<=n-i+1 ; k++) {
            printf("*");
        }
        for(int j=1 ; j<=n-i ; j++) {
            printf("*");
        }
          for(int j=1 ; j<=i ; j++) {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}