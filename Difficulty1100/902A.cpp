/// Problem Name: Visiting a Friend
/// Problem Link: https://codeforces.com/problemset/problem/902/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e4;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, m;
  cin >> n >> m;
  vector <pair <int, int> > v;
  int a, b;
  for (int i = 0;i < n;i++){
    cin >> a >> b;
    v.pb(mp(a, b));
  }
  string ans = "yes";
  int d = 0;
  for (int i = 0;i < n;i++){
    if (d < v[i].first){
      ans = "no";
      break;
    }else d = max(d, v[i].second);
    if (d>=m)break;
  }
  if (d < m)ans = "no";
  cout << ans << '\n';
  return 0;
}
