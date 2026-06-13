import java.util.Scanner;

class Logic
{
    void checkPrime(int iNum)
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 1; iCnt <= iNum; iCnt++)
        {
            if(iNum % iCnt == 0)
            {
                iCount = iCount + 1;
            }
        }

        if(iCount == 2)
        {
            System.out.println("Number is Prime");
        }

        else 
        {
            System.out.println("Number is not Prime");
        }
    }
}

class Program4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.checkPrime(7);  
    }
}