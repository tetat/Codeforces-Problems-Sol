/// Problem Name: Race Against Time
/// Problem Link: https://codeforces.com/problemset/problem/868/B

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int tc, ca = 0;
  double h, m, s, t1, t2;
  cin >> h >> m >> s >> t1 >> t2;
  m += s/60;
  h *= 5;
  h += m/12;
  if (h > 60)h -= 60;
  //cout << h << ' ' << m << ' ' << s << '\n';
  t1 *= 5;
  t2 *= 5;
  string ans = "no";
  if (t1 < t2){
    if ((t1 < h && h < t2) && (t1 < m && m < t2) && (t1 < s && s < t2))ans = "yes";
    if ((t1 > h || h > t2) && (t1 > m || m > t2) && (t1 > s || s > t2))ans = "yes";
  }else {
    if ((t1 > h && h > t2) && (t1 > m && m > t2) && (t1 > s && s > t2))ans = "yes";
    if ((t1 < h || h < t2) && (t1 < m || m < t2) && (t1 < s || s < t2))ans = "yes";
  }
  cout << ans << '\n';
  return 0;
}
