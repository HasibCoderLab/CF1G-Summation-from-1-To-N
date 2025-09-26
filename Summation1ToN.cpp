//  ================================================
//                Platform : Codeforces
//                Contest  : CF1G
//                Problem  : Summation-from-1-To-N
//                Language : C++
//                Topic    : [Summation-from-1-To-N]
//                File     : Summation1ToN.cpp
// ================================================
#include <iostream>
using namespace std;
int main()
{
   double N ;
   cin>>N;
   double sum = 0;
   for (int i = 0; i <=N; i++)
   {
    sum +=i;
    cout<< sum;
   }
   
    return 0;
}