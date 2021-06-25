/// Problem Name: Regular Bracket Sequence
/// Problem Link: https://codeforces.com/problemset/problem/1132/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e9;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int ans = 1;
  if (a != d || (a==d && a==0 && c))ans = 0;
  cout << ans << '\n';
  return 0;
}
