/// Problem Name: Little C Loves 3 I
/// Problem Link: https://codeforces.com/problemset/problem/1047/A

#include <iostream>
using namespace std;

int a, b, c;
int main()
{
    int n;cin >> n;
    a = b = 1;n = n - (a+b);
    if (n%3){
        cout << a << " " << b << " " << n << endl;
    }
    else {
        cout << a << " " << ++b << " " << --n << endl;
    }
    return 0;
}
