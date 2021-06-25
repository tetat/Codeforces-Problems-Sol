/// Problem Name: Messages
/// Problem Link: https://codeforces.com/problemset/problem/964/B

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
  int n, a, b, c, t, el;
  cin >> n >> a >> b >> c >> t;
  vector <int> ti(t+1, 0);
  int ans = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    ti[el]++;
    if (el==t || b >= c)ans += a;
    else ans += a+(c-b)*(t-el);
  }

  //cout << sum << ' ' << dec << '\n';
  //ans = max(ans, sum+dec);
  cout << ans << '\n';
  return 0;
}
