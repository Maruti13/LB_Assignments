#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL CheckBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1;

    iMask = iMask << (iPos - 1);

    if((iNo & iMask) == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iNum = 0;
    UINT iPos = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%u",&iNum);

    printf("Enter Position : ");
    scanf("%u",&iPos);

    bRet = CheckBit(iNum, iPos);

    if(bRet == TRUE)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

    return 0;
}