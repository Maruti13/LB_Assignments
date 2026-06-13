import java.util.Scanner;

class Logic
{
    void CheckPalindrome(int iNum)
    {
        int iDigit = 0;
        int iRev = 0;
        int iTemp = 0;

        iTemp = iNum;

        while(iNum != 0)
        {
            iDigit = iNum % 10;
            iRev = (iRev * 10) + iDigit;
            iNum = iNum / 10;
        }
        
        if(iRev == iTemp)
        {
            System.out.println("Number is Palindrome");
        }

        else
        {
            System.out.println("Number is not a Palindrome");
        }
    }
}

class Program2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckPalindrome(121);  
    }
}