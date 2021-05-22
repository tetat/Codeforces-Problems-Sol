/// Problem Name: New Year and Hurry
/// Problem Link: https://codeforces.com/problemset/problem/750/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int m = 4*60;
  int n, t;
  cin >> n >> t;
  int ans = 0;
  int i = 5+t;
  int it = 1;
  while (i <= m && it <= n){
    ans++;
    it++;
    i += 5*it;
  }
  printf("%d\n", ans);
  return 0;
}
