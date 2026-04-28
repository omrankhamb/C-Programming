#include<stdio.h>

int main()
{
int arr[35]={25,36,37,38,39,40,41,42,43,44,25,46,47,38,49,50,51,32,53,54,55,56,57,58,29,60,61,62,63,64,66,26,76,68,29};// there are n=35 student
//in arry student marks
    for(int i=0 ; i<=34 ; i++){
    if(arr[i]<=35){//students roll no who got marks less than 35
    printf("%d\n",i);}
    }
    return 0;
}