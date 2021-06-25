/// Problem Name: Chess Tourney
/// Problem Link: https://codeforces.com/problemset/problem/845/A

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
  for (int i = 0;i < n+n;i++){
    cin >> el;
    v.pb(el);
  }
  sort(v.begin(), v.end());
  string ans = "YES";
  if (v[n-1]==v[n])ans = "NO";
  cout << ans << '\n';
  return 0;
}
