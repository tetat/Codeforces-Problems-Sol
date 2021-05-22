/// Problem Name: Be Positive
/// Problem Link: https://codeforces.com/problemset/problem/1130/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;scanf("%d", &n);
    int a[n+1];
    int len = n&1?n/2+1:n/2;
    int po = 0, ne = 0;
    for (int i = 0;i < n;i++){
        scanf("%d", &a[i]);
        if (a[i] < 0)ne++;
        if (a[i] > 0)po++;
    }
    if (len <= ne || len <= po){
        ne<po?puts("1"):puts("-1");
    }
    else puts("0");
    return 0;
}
