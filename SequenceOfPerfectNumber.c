#include<stdio.h>

int main()
{
    int n,count=0,sum=0;
    printf("enter number n :");
    scanf("%d",&n);

    int i=1;
    while(count<n) {
        sum=0;
        for(int j=1 ; j<i ; j++) {
            if(i%j==0) {
                sum=sum+j;
            }
        }
        if(sum==i) {
            printf("%d ",i);
            count++;
        }
        i++;
    }
    


    return 0;
}