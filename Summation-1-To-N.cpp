//  ================================================
//                Platform : Codeforces
//                Contest  : CF1G
//                Problem  : Summation-from-1-To-N
//                Language : C++
//                Topic    : [Summation-from-1-To-N]
//                File     : Summation-1-To-N.cpp
// ================================================
#include <iostream>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    long long sum = N * (N + 1) / 2;
    cout << sum;

    return 0;
}