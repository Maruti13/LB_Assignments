#include<iostream>
using namespace std;

template <class T>
T MinElement(T Arr[], int iSize)
{
    T Min = Arr[0];
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < Min)
        {
            Min = Arr[iCnt];
        }
    }

    return Min;
}

int main()
{   int Arr[] = {10,20,30,40,50};
    float Frr[] = {10.3f,20.5f,30.3f,40.7f,50.8f};

    int iRet = MinElement(Arr, 5);

    cout << "Min element is : " << iRet << "\n";

    float fRet = MinElement(Frr, 5);

    cout << "Min element is : " << fRet << "\n";

    return 0;
}