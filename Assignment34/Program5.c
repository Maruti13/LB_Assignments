#include<stdio.h>

void strCatX(char *src, char *dest)
{   
    while(*src != '\0')       
    {
        src++;
    }

    *src = ' ';
    src++;

    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }

    *src = '\0';
}

int main()
{
    char Arr[50] = "Marvellous Multi OS";
    char Brr[30] = "Logic Building";

    strCatX(Arr,Brr);

    printf("New String : %s\n",Arr);

    return 0;
}