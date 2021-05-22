/// Problem Name: Discounts
/// Problem Link: https://codeforces.com/problemset/problem/1132/B

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;scanf("%d", &n);
    int a[n+1];
    long long total = 0;
    for (int i = 0;i < n;i++){
        scanf("%d", a+i);total += a[i];
    }
    sort(a, a+n);
    int m;scanf("%d", &m);
    while (m--){
        int q;scanf("%d", &q);
        printf("%I64d\n", total-a[n-q]);
    }
    return 0;
}
