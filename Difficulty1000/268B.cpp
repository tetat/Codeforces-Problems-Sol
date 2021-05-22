/// Problem Name: Buttons
/// Problem Link: https://codeforces.com/problemset/problem/268/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, ff = 1;
  int ans = 0;
  cin >> n;
  while (n--){
    ans += n*ff+1;
    ff++;
  }
  cout << ans << '\n';
  return 0;
}
