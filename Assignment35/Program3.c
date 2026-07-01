#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL CheckBit(UINT iNo)
{
    UINT iMask = (1 << 6) | (1 << 14) | (1 << 20) | (1 << 27);

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

    printf("Enter Number : ");
    scanf("%u",&iNum);

    if(CheckBit(iNum))
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }
    return 0;
}