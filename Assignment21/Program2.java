class Logic
{
    void countEvenOddRange(int iNum)
    {
        int iDigit = 0;
        int iCountEven = 0;
        int iCountOdd = 0;

        while(iNum > 0)
        {
            iDigit = iNum % 10;
            
            if(iDigit % 2 == 0)
            {
                iCountEven = iCountEven + 1;
            }

            else
            {
                iCountOdd = iCountOdd + 1;
            }
            iNum = iNum / 10;
        }

        System.out.println("Count of Even numbers : "+iCountEven);
        System.out.println("Count of Odd numbers : "+iCountOdd);
        
    }
}

class Program2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.countEvenOddRange(50333);  
    }
}