/// Problem Name: Margarite and the best present
/// Problem Link: https://codeforces.com/problemset/problem/1080/B

#include <iostream>
#include <cstdio>
using namespace std;

int fun(int n)
{
    if (n&1)return (n-1)/2-n;
    else return n/2;
}
int main()
{
    int q;scanf("%d", &q);
    while (q--){
        int l, r;scanf("%d %d", &l, &r);
        printf("%d\n", fun(r)-fun(l-1));
    }
    return 0;
}
