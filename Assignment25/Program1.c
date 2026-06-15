/*
    INPUT  : iRow = 4 , iCol = 4
    
    OUTPUT : 1  2  3  4
             5  6  7  8
             9  1  2  3
             4  5  6  7

*/         

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iNum = 0;

    for(i = 1, iNum = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++, iNum++)
        {
            if(iNum >= 10)
            {
                printf("%d\t",iNum - 9);
            }   

            else
            {
                printf("%d\t",iNum);
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