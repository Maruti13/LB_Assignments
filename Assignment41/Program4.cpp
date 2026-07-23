#include<iostream>
using namespace std;

template <class T>
T MaxElement(T Arr[], int iSize)
{
    T Max = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }

    return Max;
}

int main()
{   int Arr[] = {10,20,30,40,50};
    float Frr[] = {10.3f,20.5f,30.3f,40.7f,50.8f};

    int iRet = MaxElement(Arr, 5);

    cout << "Max element is : " << iRet << "\n";

    float fRet = MaxElement(Frr, 5);

    cout << "Max element is : " << fRet << "\n";

    return 0;
}