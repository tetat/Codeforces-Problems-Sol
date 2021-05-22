/// Problem Name: Maximum Control (easy)
/// Problem Link: https://codeforces.com/problemset/problem/958/B1

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
  vector <int> mark[n+1];
  int u, v;
  for (int i = 0;i+1 < n;i++){
    cin >> u >> v;
    mark[u].pb(v);
    mark[v].pb(u);
  }
  int ans = 0;
  for (int i = 1;i-1 < n;i++){
    if (mark[i].size()==1)ans++;
  }
  cout << ans << '\n';
  return 0;
}
