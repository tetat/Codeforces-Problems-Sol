/// Problem Name: Ilya and Diplomas
/// Problem Link: https://codeforces.com/problemset/problem/557/A

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
  int n, el;
  cin >> n;
  int f_mn, f_mx;
  cin >> f_mn >> f_mx;
  int s_mn, s_mx;
  cin >> s_mn >> s_mx;
  int t_mn, t_mx;
  cin >> t_mn >> t_mx;
  int f_d = min(f_mn, n);
  n -= f_d;
  int s_d = min(s_mn, n);
  n -= s_d;
  int t_d = min(t_mn, n);
  n -= t_d;
  int ex = min(f_mx-f_d, n);
  f_d += ex;
  n -= ex;
  ex = min(s_mx-s_d, n);
  s_d += ex;
  n -= ex;
  ex = min(t_mx-t_d, n);
  t_d += ex;
  n -= ex;
  cout << f_d << ' ' << s_d << ' ' << t_d << '\n';
  return 0;
}
