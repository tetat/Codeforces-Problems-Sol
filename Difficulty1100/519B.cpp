/// Problem Name: A and B and Compilation Errors
/// Problem Link: https://codeforces.com/problemset/problem/519/B

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long long a = 0, b = 0;
    int n, in;scanf("%d", &n);
    for (int i = 0;i < n;i++){scanf("%d", &in);a+=in;}
    for (int i = 0;i < n-1;i++){scanf("%d", &in);b+=in;a-=in;}
    for (int i = 0;i < n-2;i++){scanf("%d", &in);b-=in;}
    printf("%I64d\n%I64d\n", a, b);
    return 0;
}
