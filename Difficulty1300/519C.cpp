/// Problem Name: A and B and Team Training
/// Problem Link: https://codeforces.com/problemset/problem/519/C

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;scanf("%d %d", &a, &b);
    if (a > b){int t=a;a=b;b=t;}
    (a+a<b)?printf("%d\n", a):printf("%d\n", (a+b)/3);
    return 0;
}
