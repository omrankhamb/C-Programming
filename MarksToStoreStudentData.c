#include<stdio.h>

int main()
{int rn;
printf("enter roll number");
scanf("%d",&rn);
int marks;
printf("enter subject");
scanf("%d",&marks);
int a[rn][marks];
    printf("enter marks of physics ,chemistry, math\n");
for(int i=1 ; i<rn ; i++){
    for(int j=1 ; j<marks ;j++){
    scanf("%d",&a[i][j]);
    }
}
for(int i=0 ; i<rn ; i++){
    for(int j=0 ; j<marks ;j++){
    printf("%d  ",a[i][j]);
    }
    printf("\n");
}





    printf("thank you");
    return 0;
}