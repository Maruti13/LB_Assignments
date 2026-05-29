#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iStart, int iEnd)
{
    if(iStart < 0 || iStart > iEnd)
    {
        printf("Invalid Range\n");
        exit(0);
    }

    int iNo = 0;
    int iSum = 0;

    for(iNo = iStart; iNo <= iEnd; iNo++)
    {
        if(iNo % 2 == 0)
        {
            iSum = iSum + iNo;
        }
    }

    return iSum;
}

int main ()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition is : %d\n",iRet);

    return 0;
}