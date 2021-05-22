/// Problem Name: Rounding
/// Problem Link: https://codeforces.com/problemset/problem/898/A

#include <iostream>

using namespace std;

int main()
{
    int n, test;
    cin >> n;
    test = n % 10;
    if (test == 0)
        cout << n << endl;
    else if (test <= 5)
        cout << n - test << endl;
    else
        cout << n + (10 - test) << endl;
    return 0;
}
