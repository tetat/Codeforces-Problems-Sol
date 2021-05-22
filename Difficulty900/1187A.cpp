/// Problem Name: Stickers and Toys
/// Problem Link: https://codeforces.com/problemset/problem/1187/A

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
  cin >> tc;
  while (tc--){
    int n, s, t;
    cin >> n >> s >> t;
    int mn = min(s, t);
    int ans = max(n-t, n-s) + 1;
    cout << ans << '\n';
  }
  return 0;
}
