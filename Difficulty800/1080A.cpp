/// Problem Name: Petya and Origami
/// Problem Link: https://codeforces.com/problemset/problem/1080/A

#include <iostream>
#include <cstdio>
using namespace std;
#define lol long long
int main()
{
    lol n, k, r = 2, g = 5, b = 8;
    lol res = 0;
    cin >> n >> k;
    int tmp = n*r;
    res += tmp/k;
    if (tmp%k)res++;
    tmp = n*g;
    res += tmp/k;
    if (tmp%k)res++;
    tmp = n*b;
    res += tmp/k;
    if (tmp%k)res++;
    cout << res << endl;
    return 0;
}
