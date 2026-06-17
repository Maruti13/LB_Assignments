/*
    INPUT  : iRow = 5 , iCol = 5
    
    OUTPUT : 1  2  3  4  5
             1  *  *  *  5
             1  *  *  *  5
             1  *  *  *  5
             1  2  3  4  5

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

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || j == 1 || i == iRow || j == iCol)
            {
                printf("%d\t",j);
            }

            else
            {
                printf("*\t");
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