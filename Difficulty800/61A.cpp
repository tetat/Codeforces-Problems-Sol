/// Problem Name: Ultra-Fast Mathematician
/// Problem Link: https://codeforces.com/problemset/problem/61/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  string n, m, ans;
  cin >> n >> m;
  int len = n.size();
  for (int i = 0;i < len;i++){
    if (n[i] == m[i])ans += '0';
    else ans += '1';
  }
  cout << ans << '\n';
  return 0;
}
