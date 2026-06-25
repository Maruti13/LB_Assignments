#include<stdio.h>

void DisplayDigit(char *str)
{
    char *Digi = NULL;

    while(*str != '\0') 
    {
        if(*str >= '0' && *str <= '9')
        {
            Digi = str;
            printf("%c",*Digi);
        }

        str++;
    }

    printf("\n");
}

int main()
{
    char Arr[50]= {'\0'};

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    return 0;
}