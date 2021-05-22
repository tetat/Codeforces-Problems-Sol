/// Problem Name: Wizards and Demonstration
/// Problem Link: https://codeforces.com/problemset/problem/168/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e9;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, x, y;
  cin >> n >> x >> y;
  int need = ceil((n*y)/100.0);
  int ans = need - x;
  if (ans < 0)ans = 0;
  cout << ans << '\n';
  return 0;
}
