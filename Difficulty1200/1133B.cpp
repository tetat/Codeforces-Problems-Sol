/// Problem Name: Preparation for International Women's Day
/// Problem Link: https://codeforces.com/problemset/problem/1133/B

// Niyaz the boss :)

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int a[101];
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0;i < n;i++){
        int in;scanf("%d", &in);
        a[in%k]++;
    }
    int res = 0;
    res += a[0] / 2;
    for (int i = 1;i < k;i++){
        int j = k-i;
        if (i < j)res += min(a[i], a[j]);
        if (i == j)res += a[i] / 2;
    }
    printf("%d\n", res+res);
    return 0;
}
