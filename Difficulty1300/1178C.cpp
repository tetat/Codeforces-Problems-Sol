/// Problem Name: Tiles
/// Problem Link: https://codeforces.com/problemset/problem/1178/C

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
  Long r, c;
  cin >> r >> c;
  Long n = r+c;
  Long ans = 1;
  Long m = 998244353;
  for (int i = 0;i < n;i++){
    ans = (ans+ans) % m;
  }
  cout << ans << '\n';
  return 0;
}
