import java.util.Scanner;

class Logic
{
    void findMax(int iNum1, int iNum2)
    {
        if(iNum1 > iNum2)
        {
            System.out.println(iNum1+" is greater than "+iNum2);
        }

        else
        {
            System.out.println(iNum2+" is greater than "+iNum1);
        }
    }
}

class Program3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findMax(20, 15);  
    }
}