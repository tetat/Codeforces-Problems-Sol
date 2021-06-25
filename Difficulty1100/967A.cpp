/// Problem Name: Mind the Gap
/// Problem Link: https://codeforces.com/problemset/problem/967/A

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
  int n, s;
  cin >> n >> s;
  vector <int> v;
  for (int i = 0;i < n;i++){
    int a, b;
    cin >> a >> b;
    v.pb(a*60+b);
  }
  int ans = INT_MAX;
  int st = 0;
  if (v[0]-st > s)ans = min(ans, st);
  for (int i = 0;i < n;i++){
    if (v[i]-(s+st+1) > s)ans = min(ans, st+s+1);
    st = v[i];
  }
  if (ans==INT_MAX)ans = v[n-1]+s+1;
  cout << int(ans/60) << ' ' << ans%60 << '\n';
  return 0;
}
