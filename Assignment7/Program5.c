#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iFact1 = 1;
    int iFact2 = 1;
    int iDiff = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFact1 = iFact1 * iCnt;
        }

        else
        {
            iFact2 = iFact2 * iCnt; 
        }
    }

    iDiff = iFact1 - iFact2;

    printf("%d\n",iDiff);
}

int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("%d",iRet);

    return 0;
}