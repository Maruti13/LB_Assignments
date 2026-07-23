#include<iostream>
using namespace std;

template<class T>
int SearchLast(T Arr[], int iSize, T iNo)
{
    for(int i = iSize - 1; i >= 0; i--)
    {
        if(Arr[i] == iNo)
        {
            return i;
        }
    }
}

int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchLast(Arr, 9, 40);

    cout << iRet << endl;

    return 0;
}