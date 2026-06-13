import java.util.Scanner;

class Logic
{
    void printTable(int iNum)
    {
        int iCnt = 0;
        int iMult = 1;

        for(iCnt = 0; iCnt < 12; iCnt++)
        {
            iMult = iNum * iCnt;
            System.out.println(iNum+" * "+iCnt+" = "+iMult);
        }
    }
}

class Program5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.printTable(5);  
    }
}