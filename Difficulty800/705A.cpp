/// Problem Name: Hulk
/// Problem Link: https://codeforces.com/problemset/problem/705/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  string ans;
  for (int i = 0;i < n;i++){
    if (i%2)ans += "I love";
    else ans += "I hate";
    if (i != n-1)ans += " that ";
  }
  ans += " it";
  cout << ans << '\n';
  return 0;
}
