/// Problem Name: Maximum of Maximums of Minimums
/// Problem Link: https://codeforces.com/problemset/problem/870/B

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
  int mx = -1e9;
  int mn = 1e9;
  int n, k, el;
  cin >> n >> k;
  int ff = 0;
  int ss = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    mx = max(mx, el);
    mn = min(mn, el);
    if (i==0)ff = el;
    if (i==n-1)ss = el;
  }
  if (k==1)cout << mn << '\n';
  else if (k==2)cout << max(ff, ss) << '\n';
  else cout << mx << '\n';
  return 0;
}
