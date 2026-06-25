#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    getchar();

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character Found\n");
    }

    else
    {
        printf("Character is not found\n");
    }

    return 0;
}