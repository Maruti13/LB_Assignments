#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T Arr[], int iSize, T iNo)
{
    for(int i = 0; i < iSize; i++)
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

    int iRet = SearchFirst(Arr, 9, 40);

    cout << iRet << endl;

    return 0;
}