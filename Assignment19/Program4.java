import java.util.Scanner;

class Logic
{
    void printDigits(int iNum)
    {
        int iDigit = 0;

        while(iNum != 0)
        {
            iDigit = iNum % 10;

            System.out.println(iDigit);   
            
            iNum = iNum / 10;
        }
    }
}

class Program4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.printDigits(1234);  
    }
}