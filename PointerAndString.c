#include<stdio.h>
#include<string.h>
int main()
{
char str[]="hello friends";
char* ptr=str;
ptr="mellow";
printf("%s",*ptr);// ptr print mellow
//str print hello friencds
}//*ptr can not print anything