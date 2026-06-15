
class Logic
{
    void findLargestDigit(int iNum)
    {
        int iMax = 0;
        int iDigit = 0;

        while(iNum > 0)
        {
            iDigit = iNum % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }

            iNum = iNum / 10;
        }

        System.out.println("Maximum Number is : "+iMax);
    }
}

class Program4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findLargestDigit(86452);  
    }
}