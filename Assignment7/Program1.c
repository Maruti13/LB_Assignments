#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        if(iCnt < 0 && iCnt != 0)
        {
            printf("*\t");
        }
        else if(iCnt > 0 && iCnt != 0)
        {
            printf("#\t");
        }
    }

    printf("\n");

}

int main ()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}