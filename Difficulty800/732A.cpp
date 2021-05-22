/// Problem Name: Buy a Shovel
/// Problem Link: https://codeforces.com/problemset/problem/732/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int k, r, n;
  cin >> k >> r;
  n = k;
  int ans = 0;
  while (k%10 && (k-r)%10){
    k += n;
    ans++;
  }
  cout << ans+1 << '\n';
  return 0;
}
