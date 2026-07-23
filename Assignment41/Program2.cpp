#include<iostream>
using namespace std;

template <class T>
T LargestNo(T No1, T No2, T No3)
{
   if(No1 > No2 && No1 > No3)
   {
    return No1;
   } 

   else if(No2 > No1 && No2 > No3)
   {
    return No2;
   }

   else
   {
    return No;
   }
}

int main()
{
    int iRet = LargestNo(10, 20, 30);

    cout << "Largest Number is : " << iRet << "\n";

    float fRet = LargestNo(10.2f, 21.6f, 51.5f);

    cout << "Largest Number is : " << fRet << "\n";

    return 0;
}