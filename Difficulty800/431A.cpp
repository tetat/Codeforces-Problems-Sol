/// Problem Name: Black Square
/// Problem Link: https://codeforces.com/problemset/problem/431/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a[5];
  for (int i = 0;i < 4;i++){
    cin >> a[i+1];
  }
  string s;
  cin >> s;
  int len = s.size();
  int ans = 0;
  for (int i = 0;i < len;i++){
    ans += a[s[i]-48];
  }
  cout << ans << '\n';
  return 0;
}
