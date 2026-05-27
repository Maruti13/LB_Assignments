#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

int ChkVowel(char ch)
{
    if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main ()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : ");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else 
    {
        printf("It is not a Vowel\n");
    }

    return 0;
}