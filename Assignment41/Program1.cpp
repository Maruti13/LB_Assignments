#include<iostream>
using namespace std;

template <class T>
T Multiply(T No1, T No2)
{
    T Ans = 0;
    Ans = No1 * No2;
    return Ans; 
}

int main()
{
    int iRet = Multiply(10, 20);

    cout << iRet << "\n";

    float fRet = Multiply(10.2f, 23.6f);

    cout << fRet << "\n";

    return 0;
}