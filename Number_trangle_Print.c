#include<stdio.h>

int main()
{

int n;
printf("entr number n");
scanf("%d",&n);
int star=2*n-3;
   for(int i=1 ;i<=n ; i++){
   for(int k=1 ; k<=n-i ; k++){
   printf(" ");
   }
       for(int j=1 ; j<=2*i-1 ;j++){
                printf("%d",j);
       }
     printf("\n");
   } 
   for(int i=1 ; i<=n ; i++){
   for(int p=1 ; p<=i ; p++){
   printf(" ");}
      for(int o=1 ; o<=star ;o++){
     printf("%d",o);
     }
     printf("\n");
     star -=2;
   }
   
    return 0;
}