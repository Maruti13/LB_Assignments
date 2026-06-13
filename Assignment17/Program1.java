import java.util.Scanner;

class Logic
{
    void sumOfDigits(int iNum)
    {
        int iSum = 0;
        int iDigit = 0;

        while(iNum != 0)
        {
            iDigit = iNum % 10;
            iSum = iSum + iDigit;
            iNum = iNum / 10;
        }
        
        System.out.println("The Sum of Digits is : "+iSum);
    }
}

class Program1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.sumOfDigits(1234);  
    }
}