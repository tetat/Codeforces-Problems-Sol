/// Problem Name: Interesting drink
/// Problem Link: https://codeforces.com/problemset/problem/706/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x[100001], q, m;
    scanf("%d", &n);
    for (int i = 0;i < n;i++){
        scanf("%d", &x[i]);
    }
    sort(x, x+n);
    scanf("%d", &q);
    while (q--){
        int res = 0;
        scanf("%d", &m);
        res = upper_bound(x, x+n, m) - x;
        printf("%d\n", res);
    }
    return 0;
}
