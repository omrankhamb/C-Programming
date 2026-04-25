#include<stdio.h>

int main()
{
    int num=1,sum=0,i,count=1,n;
    printf("how many numbers you want ro print");
    scanf("%d",&n);
    printf("perfect numbers are:");
    while(count<=n)
    {   for(i=1 ; i<num ; i++)
        {   if(num%i==0)
                sum=sum+i;
        }
        if(num==sum)
        {
            printf("%d\t",num);
            count++;
        }
        num++,sum=0;









    }
    printf("Hello world!");
    return 0;
}