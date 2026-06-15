
class Logic
{
    void findSmallestDigit(int iNum)
    {
        int iMin = 0;
        int iDigit = 0;
        
        iMin = 9;

        while(iNum > 0)
        {
            iDigit = iNum % 10;
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }

            iNum = iNum / 10;
        }

        System.out.println("Maximum Number is : "+iMin);
    }
}

class Program5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findSmallestDigit(86452);  
    }
}