/// Problem Name: Less or Equal
/// Problem Link: https://codeforces.com/problemset/problem/977/C

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, a[200002];
    scanf("%d %d", &n, &k);

    for (int i = 1;i <= n;i++)
        scanf("%d", &a[i]);

    a[0] = 1;
    sort(a+1, a+n+1);

    if (a[k] == a[k+1])
        printf("-1\n");
    else
        printf("%d\n", a[k]);
    return 0;
}
