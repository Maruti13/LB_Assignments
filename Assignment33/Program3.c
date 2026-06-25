#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iIndex = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iIndex;
        }

        else
        {
            return -1;
        }

        iIndex++;
        str++;
    }
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

    iRet = FirstChar(Arr, cValue);

    printf("Occurrence of %c in %s is : %d \n",cValue,Arr,iRet);

    return 0;
}