/// Problem Name: Fake NP
/// Problem Link: https://codeforces.com/problemset/problem/805/A

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
  Long n, m;
  cin >> n >> m;
  Long ans = 2;
  if (n==m && n%2){
    ans = n;
  }
  cout << ans << '\n';
  return 0;
}
