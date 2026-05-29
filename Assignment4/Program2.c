#include<stdio.h>

int FactRev(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0 && iCnt != 12)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactRev(iValue);

    printf("%d",iRet);

    return 0;
}