#include<stdio.h>
#include<stdlib.h>

int main()
{
int *ptr;
ptr=(int*)calloc(3,sizeof(int));
for(int i=0 ;i<3; i++ ){
printf("enter the value of %d of this array \n",i);
scanf("%d",&ptr[i]);
}

for(int i=0 ;i<3 ; i++ ){
printf("enter the value of %d of this array ",i);
printf(" %d\n",ptr[i]);
}
    printf("Hello world!");
    return 0;
}