import java.util.Scanner;

class Logic
{
    void displayGrade(int iMarks)
    {
        if(iMarks >= 85 && iMarks <= 100)
        {
            System.out.println("Grade : A");
        }   

        else if(iMarks >= 75 && iMarks <= 84)
        {
            System.out.println("Grade : B");
        }

        else if(iMarks >= 50 && iMarks <= 74)
        {
            System.out.println("Grade : C");
        }

        else
        {
            System.out.println("Fail");
        }
    }
}

class Program2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.displayGrade(82);  
    }
}