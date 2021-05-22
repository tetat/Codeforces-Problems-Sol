/// Problem Name: Soft Drinking
/// Problem Link: https://codeforces.com/problemset/problem/151/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int ans = min((k*l)/nl, min(c*d, p/np)) / n;
  cout << ans << '\n';
  return 0;
}
