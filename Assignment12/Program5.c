#include<stdio.h>

int Count(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit < 6)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;

}

int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    
    printf("%d\n",iRet);
    
    return 0;
}