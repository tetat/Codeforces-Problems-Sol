/// Problem Name: Patrick and Shopping
/// Problem Link: https://codeforces.com/problemset/problem/599/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int ans = a+b+c;
  ans = min(ans, a+a+b+b);
  ans = min(ans, a+a+c+c);
  ans = min(ans, b+b+c+c);
  cout << ans << '\n';
  return 0;
}
