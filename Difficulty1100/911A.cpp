/// Problem Name: Nearest Minimums
/// Problem Link: https://codeforces.com/problemset/problem/911/A

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
  vector <int> v;
  int mn = INT_MAX;
  for (int i = 0;i < n;i++){
    cin >> el;
    mn = min(mn, el);
    v.pb(el);
  }
  vector <int> p;
  for (int i = 0;i < n;i++){
    if (v[i]==mn)p.pb(i);
  }
  int ans = INT_MAX;
  int len = p.size();
  for (int i = 1;i < len;i++){
    ans = min(ans, p[i]-p[i-1]);
  }
  cout << ans << '\n';
  return 0;
}
