import java.util.Scanner;

class Logic
{
    void sumEvenNumbers(int iNum)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= iNum; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        System.out.println(iSum);
    }
}

class Program4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.sumEvenNumbers(10);  
    }
}