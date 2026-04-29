#include<stdio.h>

int main()
{
    int m[3][3]= {{1,2,3,},{1,2,3},{1,2,8}};
    int maximum =-1;
    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            if(maximum<m[i][j]) {
                maximum=m[i][i];
            }
        }

    }
    printf("%d",maximum);
    return 0;
}