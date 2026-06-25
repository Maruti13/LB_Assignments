#include<stdio.h>

void strNCpyX(char *src, char *dest, int iCnt)
{   
    while((*src != '\0') && (iCnt != 0))       
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30] = {'\0'};

    strNCpyX(Arr,Brr,10);

    printf(" String is : %s\n",Brr);

    return 0;
}