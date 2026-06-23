#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Dec\tOct\tHex\tSymbol\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%d\t%o\t%X\t%c\n",iCnt,iCnt,iCnt,iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}