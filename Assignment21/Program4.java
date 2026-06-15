class Logic
{
    void countFactors(int iNum)
    {
        int iCnt = 0;
        int iCountFact = 0;

        for(iCnt = 1; iCnt <= 12; iCnt++)
        {
            if(iNum % iCnt == 0)
            {
                iCountFact = iCountFact + 1;       
            }
        }

        System.out.println("The count of factors are : "+iCountFact);
    }
}

class Program4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.countFactors(12);  
    }
}