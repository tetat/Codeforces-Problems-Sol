/// Problem Name: Unnatural Conditions
/// Problem Link: https://codeforces.com/problemset/problem/1028/B

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    m = n;
    while (n--)printf("1");puts("");
    while (m--)m?printf("8"):printf("9");puts("");
    return 0;
}
