#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xF000000F;

    return (iNo ^ iMask);
}

int main()
{
    UINT iNum = 0;
    UINT iAns = 0;

    printf("Enter Number : ");
    scanf("%u",&iNum);

    iAns = ToggleBit(iNum);

    printf("Modified Number : %u\n", iAns);

    return 0;
}