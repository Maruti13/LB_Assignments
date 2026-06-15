/*
    INPUT  : iRow = 4 , iCol = 4
    
    OUTPUT : 2  4  6  8
             1  3  5  7
             2  4  6  8
             1  3  5  7

*/         

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iNum1 = 0;
    int iNum2 = 0;

    for(i = 1, iNum1 = 1, iNum2 = 2; i <= iRow; i++, iNum1++, iNum2++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",iNum1 + 2);
            }   

            else
            {
                printf("%d\t",iNum2);
            }
        }

        printf("\n");
    }
}

int main ()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the value of rows : ");
    scanf("%d",&iValue1);

    printf("Enter the number of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}