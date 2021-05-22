/// Problem Name: Complicated GCD
/// Problem Link: https://codeforces.com/problemset/problem/664/A

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
  string a, b;
  cin >> a >> b;
  string ans = "1";
  if (a==b)ans = a;
  cout << ans << '\n';
  return 0;
}
