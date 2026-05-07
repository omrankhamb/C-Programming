#include<stdio.h>

int a(int a,int b){
return a+b;
}
int main(){
int *ptr =&a;
clrscr();

printf("address of a= %p\n",&a);

printf("value stored at pointer = %d",ptr);

getch();
return 0;
}

