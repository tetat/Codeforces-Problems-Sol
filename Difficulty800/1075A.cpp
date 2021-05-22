/// Problem Name: The King's Race
/// Problem Link: https://codeforces.com/problemset/problem/1075/A

#include <iostream>
#include <cstdio>
using namespace std;
#define lol long long

int main()
{
    lol n;cin >> n;
    lol x, y;cin >> x >> y;
    if (x+y-1 > n)puts("Black");
    else puts("White");
    return 0;
}
