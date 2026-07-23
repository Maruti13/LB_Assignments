#include<iostream>
using namespace std;

template <class T>
T AddN(T *Arr, int iSize)
{
    T sum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        sum = Arr[i] + sum;
    }

    return sum;
}

int main()
{   int Arr[] = {10,20,30,40,50};
    float Frr[] = {10.3f,20.5f,30.3f,40.7f,50.8f};

    int iRet = AddN(Arr, 5);

    cout << "Addition is : " << iRet << "\n";

    float fRet = AddN(Frr, 5);

    cout << "Addition is : " << fRet << "\n";

    return 0;
}