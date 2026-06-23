#include<stdio.h>

void Reverse(char *str)
{
    char *start = NULL;

    start = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;
    
    while(start <= str)
    {
        printf("%c\n",*str);
        str--;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return 0;
}