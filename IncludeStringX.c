#include<stdio.h>
#include<string.h>

int StrlenX(const char *str)
{
    int i = 0;
    while ((*str) != '\0')
    {
        str++;
        i++;
    }
    return i;
}

void StringUpperX(char *str)
{
    int iLength = StrlenX(str);

    int i = 0;
    for(int i = 0 ; i < iLength ; i++)
    {
        if(((*str) >= 'a') && ((*str) <= 'z'))
        {
            (*str) = (char)((*str) - 32);
        }
        str++;
    }
}

void StringLower(char *str)
{
    int iLength = StrlenX(str);

    int i = 0;
    for(int i = 0 ; i < iLength ; i++)
    {
        if(((*str) >= 'A') && ((*str) <= 'Z'))
        {
            (*str) = (char)((*str) + 32);
        }
        str++;
    }

}

void StringToggle(char *str)
{
    int iLength = StrlenX(str);

    int i = 0;
    for(int i = 0 ; i < iLength ; i++)
    {
        if(((*str) >= 'A') && ((*str) <= 'Z'))
        {
            (*str) = (char)((*str) + 32);
        }
        str++;
    }

}

int StrCompareX(char *str,char ch)
{
    int i = 0;
    while ((*str) != '\0')
    {
        if((*str) == ch)
        {
            break;
        }
        i++;
        str++;
    }

    return i;
}


int main()
{
    char Arr[20];
    char src[20];
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    int iRet = 0;


    iRet = StrlenX(Arr);
    printf("Length of String is : %d\n",iRet);
    
    StringUpperX(Arr);                                  //Pass by Address
    printf("Upper of String is : %s\n",Arr);

    StringLower(Arr);                                   //Pass by Address
    printf("Upper of String is : %s\n",Arr);

    StringToggle(Arr);                                   //Pass by Address
    printf("Upper of String is : %s\n",Arr);

    char ch = '\0';
    printf("Enter character present in a string or not : ");
    scanf(" %c",&ch);

    iRet = StrCompareX(Arr,ch);
    printf("present at index : %d",iRet);

    
    return 0;
}