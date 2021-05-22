/// Problem Name: Coins
/// Problem Link: https://codeforces.com/problemset/problem/1061/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, s;scanf("%d %d", &n, &s);
    (s%n)?printf("%d\n",s/n+1):printf("%d\n",s/n);
    return 0;
}
