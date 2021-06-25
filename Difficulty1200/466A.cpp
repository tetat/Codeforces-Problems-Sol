/// Problem Name: Cheap Travel
/// Problem Link: https://codeforces.com/problemset/problem/466/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  int N = n;
  int ans1 = n*a;
  int ans2 = 0;
  while (n > m){
    ans2 += b;
    n -= m;
  }
  //if (n<0)n = 0;
  ans2 += min(n*a, b);
  if (N <= m && ans2>b)ans2 = b;
  cout << min(ans1, ans2) << '\n';
  return 0;
}
