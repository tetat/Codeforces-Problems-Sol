/// Problem Name: Build a Contest
/// Problem Link: https://codeforces.com/problemset/problem/1100/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, in;
    cin >> n >> m;
    int s[n+2], test = 0;
    memset(s, 0, sizeof(s));
    for (int i = 0;i < m;i++){
        cin >> in;
        if (s[in]==0)test++;++s[in];
        if (test==n){
            test = 0;cout << 1;
            for (int i = 1;i <= n;i++){
                --s[i];if (s[i])test++;
            }
        }
        else cout << 0;
    }cout << endl;
    return 0;
}
