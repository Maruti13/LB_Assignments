#include<stdio.h>

void strCpyCap(char *src, char *dest)
{   
    while(*src != '\0')       
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }

        src++;
    }
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30] = {'\0'};

    strCpyCap(Arr,Brr);

    printf("Copied String is : %s\n",Brr);

    return 0;
}