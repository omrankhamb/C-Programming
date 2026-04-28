#include<stdio.h>

int main()
{
int n;
printf("enter number n");
scanf("%d",&n);

for(int i=0;i<n;i++){
    for(int j=0 ; j<n-i ; j++){
    if(i==0 || j==0 ||j==n-1-i)
    printf(" %d",j+1);
    else printf("  ");
    }

printf("\n");

}
    printf("Hello world!");
    return 0;
}