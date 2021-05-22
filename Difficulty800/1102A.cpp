/// Problem Name: Integer Sequence Dividing
/// Problem Link: https://codeforces.com/problemset/problem/1102/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long long n;scanf("%I64d", &n);
    return printf("%d\n", (n*(n+1)/2)%2),0;
}
