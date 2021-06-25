/// Problem Name: Badges
/// Problem Link: https://codeforces.com/problemset/problem/1214/B

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
  int b, g, n;
  cin >> b >> g >> n;
  int ans = 0;
  for (int i = 0;i <= b;i++){
    for (int j = 0;j <= g;j++){
      if (i+j == n)ans++;
    }
  }
  cout << ans << '\n';
  return 0;
}
