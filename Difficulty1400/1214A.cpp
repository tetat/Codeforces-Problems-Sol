/// Problem Name: Optimal Currency Exchange
/// Problem Link: https://codeforces.com/problemset/problem/1214/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, d, e;
  cin >> n >> d >> e;
  e *= 5;
  int ans = n%d;
  ans = min(ans, n%e);
  while (n>0 && n>e){
    if (e<=n)n -= e;
    ans = min(ans, n);
    ans = min(ans, n%d);
    //cout << n << '\n';
  }
  cout << ans << '\n';
  return 0;
}
