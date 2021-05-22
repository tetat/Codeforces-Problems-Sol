/// Problem Name: Dasha and Stairs
/// Problem Link: https://codeforces.com/problemset/problem/761/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e4;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, m;
  cin >> n >> m;
  if (n>m)swap(n, m);
  if (m-n < 2 && (n>0 || m>0))cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
