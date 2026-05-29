#include<stdio.h>

int KMtoMeter(int iNo)
{
    if(iNo < 0)
    {
        return -1;
    }

    int iConvert = 0;

    iConvert = iNo * 1000;

    return iConvert;
}

int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d\n",iRet);

    return 0;
}