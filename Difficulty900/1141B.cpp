/// Problem Name: Maximal Continuous Rest
/// Problem Link: https://codeforces.com/problemset/problem/1141/B

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;scanf("%d", &n);
    int a[n+1];
    for (int i = 0;i < n;i++){
        scanf("%d", &a[i]);
    }
    int res = 0, cnt = 0;
    int f = 0, l = 0;
    for (int i = 0;i < n && a[i];i++){
        f++;
    }
    for (int i = n-1;i >= 0 && a[i];i--){
        l++;
    }
    for (int i = 0;i < n;i++){
        if (a[i])cnt++;
        else {
            res = max(cnt, res);
            cnt = 0;
        }

        if (i==n-1){
            if (a[i])res = max(cnt, res);
        }
    }
    if (f && l){
        res = max(res, f+l);
    }
    printf("%d\n", res);
    return 0;
}
