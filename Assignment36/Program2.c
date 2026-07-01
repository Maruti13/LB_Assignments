#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = ~(0x240);

    return (iNo & iMask);
}

int main()
{
    UINT iNo = 0;
    UINT iAns = 0;

    printf("Enter Number : ");
    scanf("%u",&iNo);

    iAns = OffBit(iNo);

    printf("Modified Number : %u\n",iAns);

    return 0;
}