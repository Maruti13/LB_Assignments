#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        exit(0);
    }

    int iNo = 0;

    for(iNo = iEnd; iNo >= iStart; iNo--)
    {
        printf("%d\t",iNo);
    }

    printf("\n");
}

int main ()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}