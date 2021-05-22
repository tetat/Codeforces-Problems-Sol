/// Problem Name: Combination Lock
/// Problem Link: https://codeforces.com/problemset/problem/540/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;
  int ans = 0;
  for (int i = 0;i < n;i++){
    int d = (s[i]-48)-(t[i]-48);
    if (d < 0)d = -d;
    ans += min(d, 10-d);
  }
  cout << ans << '\n';
  return 0;
}
