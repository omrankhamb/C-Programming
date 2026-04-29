#include<stdio.h>

int main()
{   int m;
    printf("enter marks  :");
    scanf("%d",&m);

    if(m>=60)
        printf("division a");
    else {
        if(m>50 )
            printf("division c");
        else {
            if(m>40)
                printf("division d");
            else {
                if(m<40)
                    printf("try next year");
            }
        }
    }
    return 0;
}