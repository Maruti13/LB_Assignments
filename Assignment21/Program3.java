class Logic
{
    void displayFactors(int iNum)
    {
        int iCnt = 0;

        System.out.println("The factors are : ");
        for(iCnt = 1; iCnt <= 12; iCnt++)
        {
            if(iNum % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Program3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.displayFactors(12);  
    }
}