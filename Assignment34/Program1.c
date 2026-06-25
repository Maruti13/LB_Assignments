#include<stdio.h>

void strCpyX(char *src, char *dest)
{   
    while(*src != '\0')       
    {
        *dest = *src;
        src++;
        dest++;
    }
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30] = {'\0'};

    strCpyX(Arr,Brr);

    printf("Copied String is : %s\n",Brr);

    return 0;
}