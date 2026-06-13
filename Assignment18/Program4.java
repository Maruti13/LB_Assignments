import java.util.Scanner;

class Logic
{
    void sumEvenOddDigits(int iNum)
    {
        int iCnt = 0;
        int iSumEven = 0;
        int iSumOdd = 0;

        for(iCnt = 1; iCnt <= iNum; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSumEven = iSumEven + iCnt;  
            }

            else
            {
                iSumOdd = iSumOdd + iCnt;
            }
        }

        System.out.println("The Sum of Even NUmbers : "+iSumEven);
        System.out.println("The Sum of Even NUmbers : "+iSumOdd);
    }
}

class Program4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.sumEvenOddDigits(123456789);  
    }
}