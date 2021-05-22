/// Problem Name: Paper Airplanes
/// Problem Link: https://codeforces.com/problemset/problem/965/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int k, n, s, p;
  cin >> k >> n >> s >> p;
  int rs = ceil(double(n) / double(s));
  int ts = k*rs;
  int ans = ceil(double(ts) / double(p));
  cout << ans << '\n';
  return 0;
}
