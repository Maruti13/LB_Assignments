#include<stdio.h>

double SquareMeter(int iValue)
{
    double dConvert = 0.0;

    dConvert = iValue * 0.0929;
    
    return dConvert;
}

int main ()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is : %f\n",dRet);

    return 0;
}