import java.util.Scanner;

class Logic
{
    void checkPerfect(int iNum)
    {
        int iCnt = 0;
        int iSum = 0;
        
        for (iCnt = 1; iCnt <= iNum / 2; iCnt++)
        {
            if (number % i == 0) 
            {
                iSum = iSum + iCnt; 
            }
        }
            
        if (iSum == iNum)
        {
            System.out.println(iNum+" is a perfect number");
        } 
        
        else 
        {
            System.out.println(iNum+" is not a perfect number");
        }
    }
}

class Program3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.checkPerfect(6);  
    }
}