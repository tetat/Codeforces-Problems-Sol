/// Problem Name: Lunar New Year and Number Division
/// Problem Link: https://codeforces.com/problemset/problem/1106/C

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;scanf("%d", &n);
    int a[n+1];
    for (int i = 0;i < n;i++){
        scanf("%d", a+i);
    }
    sort(a, a+n);
    long long res = 0;
    for (int i = 0, j = n-1;i < n/2;i++, j--){
        res += ((a[i]+a[j])*(a[i]+a[j]));
    }
    printf("%I64d\n", res);
    return 0;
}
