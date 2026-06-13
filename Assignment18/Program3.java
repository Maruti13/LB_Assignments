import java.util.Scanner;

class Logic
{
    void printOddNumbers(int iNum)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNum; iCnt++)
        {
            if(iCnt % 2 != 0)
            {
                System.out.println(iCnt);    
            }
        }
    }
}

class Program3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.printOddNumbers(7);  
    }
}