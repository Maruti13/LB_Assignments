import java.util.Scanner;

class Logic
{
    void checkSign(int iNum)
    {
        int iCnt = 0;
        
        if(iNum > 0)
        {
            System.out.println(iNum+" is positive");
        }

        else if(iNum < 0)
        {
            System.out.println(iNum+" is negative");
        }

        else
        {
            System.out.println(iNum+" is zero");
        }

    }
}

class Program5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.checkSign(-8);  
    }
}