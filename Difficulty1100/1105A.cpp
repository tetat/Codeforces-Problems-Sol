/// Problem Name: Salem and Sticks
/// Problem Link: https://codeforces.com/problemset/problem/1105/A

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;scanf("%d", &n);
    int a[n], mn = 101, mx = 0;
    for (int i = 0;i < n;i++){
        scanf("%d", &a[i]);
        if (a[i] < mn)mn = a[i];
        if (a[i] > mx)mx = a[i];
    }
    int cost = 100001, t;
    for ( ;mn <= mx;mn++){
        int tmp = 0;
        for (int i = 0;i < n;i++){
            if (fabs(a[i]-mn) > 1)tmp += fabs(a[i]-mn)-1;
        }
        if (tmp < cost){
            cost = tmp;
            t = mn;
        }
    }
    printf("%d %d\n", t, cost);
    return 0;
}
