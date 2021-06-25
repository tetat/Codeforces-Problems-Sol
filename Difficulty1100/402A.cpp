/// Problem Name: Nuts
/// Problem Link: https://codeforces.com/problemset/problem/402/A

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
  int k, a, b, v;
  cin >> k >> a >> b >> v;
  int ans = 0;
  while (a > 0){
    int mn = min(k-1, b);
    b -= mn;
    mn += 1;
    a -= mn*v;
    ans++;
  }
  cout << ans << '\n';
  return 0;
}
