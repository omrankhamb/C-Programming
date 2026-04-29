#include<stdio.h>

int main()
{
    int m[3][3]= {{0,2,3,},{1,2,3},{1,2,8}};
    int minimum =m[0][0];
    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            if(minimum>m[i][j]) {
                minimum=m[i][i];
            }
        }

    }
    printf("%d",minimum);
    return 0;
}