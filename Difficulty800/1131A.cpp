/// Problem Name: Sea Battle
/// Problem Link: https://codeforces.com/problemset/problem/1131/A

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
  Long w1, h1, w2, h2;
  cin >> w1 >> h1 >> w2 >> h2;
  Long ans = w1+2;
  ans += h1+h1+2;
  ans += w1;
  ans += h2+h2;
  cout << ans << '\n';
  return 0;
}
