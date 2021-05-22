/// Problem Name: Chocolates
/// Problem Link: https://codeforces.com/problemset/problem/1139/B

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
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  Long ans = 0;
  int mx = INT_MAX;
  for (int i = n-1;i >= 0;i--){
    ans += min(mx, v[i]);
    mx = min(mx, v[i]) - 1;
    if (mx < 0)mx = 0;
  }
  cout << ans << '\n';
  return 0;
}
