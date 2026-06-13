import java.util.Scanner;

class Logic
{
    void findMin(int iNum1, int iNum2, int iNum3)
    {
        if(iNum1 < iNum2 && iNum1 < iNum3)
        {
            System.out.println(iNum1+" is minimum than "+iNum2+" and "+iNum3);
        }

        else if(iNum2 < iNum1 && iNum2 < iNum3)
        {
            System.out.println(iNum2+" is minimum than "+iNum1+" and "+iNum3);
        }

        else
        {
            System.out.println(iNum3+" is minimum than "+iNum1+" and "+iNum2);
        }
    }
}

class Program4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findMin(3, 7, 2);  
    }
}