#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    getchar();

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    iRet = CountChar(Arr, cValue);

    printf("Count of %c in %s is : %d \n",cValue,Arr,iRet);

    return 0;
}