/*
    INPUT  : iRow = 4 , iCol = 4
    
    OUTPUT : * * * *
             * * * #
             * * # #
             * # # #

*/         

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    if(iRow != iCol)
    {
        printf("Invalid parameters\n");
        printf("Numbers of rows and columns should be same !\n");
        return;
    }

    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j <= i)
            {
                printf("*\t");
            }

            else
            {
                printf("#\t");
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