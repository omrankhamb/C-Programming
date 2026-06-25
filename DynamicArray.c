#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iSize = 0;
    printf("Enter size : ");
    scanf("%d",&iSize);

    int *ptr = (int*)malloc(iSize * sizeof(int));   // Spae is Allocated

    for(int i = 0 ; i < iSize ; i++)
    {
        scanf("%d\n",(ptr + i));
    }

    for(int i = 0 ; i < iSize ; i++)
    {
        printf("%d\n",ptr[i]);
    }

    return 0;
}