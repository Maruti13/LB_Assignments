#include<stdio.h>

double FhtoCs(float fTemp)
{
    float fCelsius = 0.0f;

    fCelsius = (fTemp - 32) * 5/9; 

    return fCelsius;
}

int main ()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is : %f\n",dRet);

    return 0;
}