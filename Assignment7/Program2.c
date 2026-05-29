#include<stdio.h>

int DollarToINR(int iNo)
{
    if(iNo <= 0)
    {
        return -1;
    }

    int iConvert = 0;

    iConvert = iNo * 70;

    return iConvert;

}

int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d\n",iRet);

    return 0;
}