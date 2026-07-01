#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0;

    if(iPos < 1 || iPos > 32)
    {
        return iNo;
    }

    iMask = 1U << (iPos - 1);

    return (iNo | iMask);
}

int main()
{
    UINT iNum = 0;
    UINT iPos = 0;
    UINT iAns = 0;

    printf("Enter Number : ");
    scanf("%u",&iNum);

    printf("Enter Position : ");
    scanf("%u",&iPos);

    iAns = OnBit(iNum, iPos);

    printf("Modified Number : %u\n", iAns);

    return 0;
}