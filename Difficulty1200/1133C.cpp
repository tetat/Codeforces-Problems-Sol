/// Problem Name: Balanced Team
/// Problem Link: https://codeforces.com/problemset/problem/1133/C

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;scanf("%d", &n);
    int a[n];
    for (int i = 0;i < n;i++){
        scanf("%d", a+i);
    }
    sort(a, a+n);
    int res = 0, cnt = 0;
    for (int i = 0, j = 0;i < n && j < n; ){
        if (a[j]-a[i] < 6){
            cnt++;j++;
        }
        else {
            res = max(res, cnt);
            cnt--;i++;
        }
    }
    printf("%d\n", max(res, cnt));
    return 0;
}
