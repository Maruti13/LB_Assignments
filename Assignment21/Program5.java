class Logic
{
    void printDivisibleBy2and3(int iNum)
    {
        int iCnt = 0;

        System.out.println("The numbers divisible by 2 and 3 are : ");
        
        for(iCnt = 1; iCnt <= iNum; iCnt++)
        {
            if(iCnt % 2 == 0 && iCnt % 3 == 0)
            {
                System.out.println(iCnt);       
            }
        }

        System.out.println(iCnt);
    }
}

class Program5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.printDivisibleBy2and3(30);  
    }
}