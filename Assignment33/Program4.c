#include<stdio.h>

int LastChar(char *str, char ch)
{
    
    

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

    iRet = LastChar(Arr, cValue);

    printf("Occurrence of %c in %s is : %d \n",cValue,Arr,iRet);

    return 0;
}