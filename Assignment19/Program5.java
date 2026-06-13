import java.util.Scanner;

class Logic
{
    void calculatePower(int iBase, int iExp)
    {
        int iCnt = 0;
        int iNum = 1;

        for(iCnt = 1; iCnt <= iExp; iCnt++)
        {
            iNum = iNum * iBase;
        }

        System.out.println(iNum);
    }
}

class Program5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.calculatePower(2, 5);  
    }
}