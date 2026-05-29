#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    printf("%d\n",iMult);
}

int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;
}