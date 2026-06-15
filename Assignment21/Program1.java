class Logic
{
    void productOfDigits(int iNum)
    {
        int iDigit = 0;
        int iPro = 1;

        while(iNum > 0)
        {
            iDigit = iNum % 10;
            iPro = iPro * iDigit;
            iNum = iNum / 10;
        }
        System.out.println(iPro);
    }
}

class Program1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.productOfDigits(23);  
    }
}