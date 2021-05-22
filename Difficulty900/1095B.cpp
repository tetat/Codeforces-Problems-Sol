/// Problem Name: Array Stabilization
/// Problem Link: https://codeforces.com/problemset/problem/1095/B

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;scanf("%d", &n);
    int a[n+1];
    for (int i = 0;i < n;i++){
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    int x, y;
    x = a[n-1] - a[1];
    y = a[n-2] - a[0];
    printf("%d\n", x>y?y:x);
    return 0;
}
