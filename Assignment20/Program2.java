import java.util.Scanner;

class Logic
{
    void printReverse(int iNum)
    {
        int iCnt = 0;

        for(iCnt = iNum; iCnt >= 1; iCnt--)
        {
            System.out.println(iCnt);   
        }
    }
}

class Program2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.printReverse(10);  
    }
}