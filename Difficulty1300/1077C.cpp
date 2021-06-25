/// Problem Name: Good Array
/// Problem Link: https://codeforces.com/problemset/problem/1077/C

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
#define lol long long
int main()
{
    int n;scanf("%d", &n);
    int a[n], ar[n];
    lol sum = 0;
    for (int i = 0;i < n;i++){
        scanf("%d", &a[i]);
        ar[i] = a[i];sum += a[i];
    }
    sort(ar, ar+n);
    int bmax, smax;
    bmax = ar[n-1];smax = ar[n-2];
    int MAX = bmax;
    int res[n], len = 0;
    for (int i = 0;i < n;i++){
        if (MAX == a[i])MAX = smax;
        sum -= a[i];
        if (sum-MAX == MAX)res[len++] = i+1;
        sum += a[i];
        MAX = bmax;
    }
    if (len){
        printf("%d\n", len);
        for (int i = 0;i < len;i++)printf("%d ", res[i]);
        puts("");
    }
    else puts("0");
    return 0;
}
