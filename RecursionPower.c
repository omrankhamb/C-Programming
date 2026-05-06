#include<stdio.h>
int power(int a,int b){
if(b==0) return 1;
int rec=a*power(a,b-1);
return rec;


}
int main()
{int a,b;
printf("enter a and b");
scanf("%d%d",&a,&b);
printf("power of a to the b is %d",power(a,b));
 
    return 0;
}