#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x240;    

    return (iNo ^ iMask);
}

int main()
{
    UINT iNo = 0;
    UINT iAns = 0;

    printf("Enter Number : ");
    scanf("%u",&iNo);

    iAns = ToggleBit(iNo);

    printf("Modified Number : %u\n",iAns);

    return 0;
}