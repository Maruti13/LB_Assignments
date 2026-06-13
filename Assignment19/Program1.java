import java.util.Scanner;

class Logic
{
    void checkLeapYear(int iYear)
    {
        if(iYear % 400 == 0 || (iYear % 4 == 0 && iYear % 100 != 0))
        {
            System.out.println(iYear+" is a leap year");
        }

        else
        {
            System.out.println(iYear+" is not a leap year");
        }
    }
}

class Program1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.checkLeapYear(4);  
    }
}