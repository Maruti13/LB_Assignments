import java.util.Scanner;

class Logic
{
    void checkDivisible(int iNum)
    {
        if(iNum % 5 == 0 && iNum % 11 == 0)
        {
            System.out.println(iNum+" is divisible by 5 and 11");
        }

        else
        {
            System.out.println(iNum+" is not divisible by 5 and 11");
        }
    }
}

class Program3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.checkDivisible(55);  
    }
}