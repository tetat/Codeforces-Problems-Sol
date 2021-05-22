/// Problem Name: Teams Forming
/// Problem Link: https://codeforces.com/problemset/problem/1092/B

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;scanf("%d", &n);
    int a[n];
    for (int i = 0;i < n;i++){
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    int res = 0;
    for (int i = 1;i < n;i+=2){
        if (a[i]!=a[i-1])res += a[i]-a[i-1];
    }
    printf("%d\n", res);
    return 0;
}
