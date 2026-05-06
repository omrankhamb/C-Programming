#include<stdio.h>
int stairs(int n){
    if(n<=2) return n;
    return stairs(n-1)+stairs(n-2);

}
int main()
{
int n;
    printf("enter no of stairs :");
    scanf("%d",&n);
   printf("%d", stairs(n));
    return 0;
}