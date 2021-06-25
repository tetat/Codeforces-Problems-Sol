/// Problem Name: Mike and Children
/// Problem Link: https://codeforces.com/problemset/problem/1121/B

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
  int n, el;
  cin >> n;
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  vector <int> mark(2*(1e5)+1, 0);
  int mx = 0;
  for (int i = 0;i < n;i++){
    for (int j = i+1;j < n;j++){
      mark[v[i]+v[j]]++;
      mx = max(mx, mark[v[i]+v[j]]);
    }
  }
  cout << mx << '\n';
  return 0;
}
