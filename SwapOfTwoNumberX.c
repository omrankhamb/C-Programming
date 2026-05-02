  #include<stdio.h>

int main()
{
    int a;
    int b;
    printf("enter number a:");
    scanf("%d",&a);
    printf("enter number b");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",b);
    return 0;
}