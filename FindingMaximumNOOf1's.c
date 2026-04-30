#include<stdio.h>

int main()
{
    int a[3][4]= {{1,0,0,1},{1,0,1,1},{1,1,1,1,}};//to find maximum no of 1 in row
    int maxcount =0;
    int maxidx =-1;
    for(int i=0 ; i<=2 ; i++) {
        int count=0;
        for(int j=0 ; j<=3 ; j++) {
            if(a[i][j]==1) {
                count++;
            }
            if(maxcount<count) {
                maxcount=count;
                maxidx=i;
            }
        }
        printf("\n");
    }
    printf("%d %d",maxcount,maxidx);
    return 0;
}