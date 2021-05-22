/// Problem Name: Elections
/// Problem Link: https://codeforces.com/problemset/problem/1043/A

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
  int n, el;
  cin >> n;
  int sum = 0;
  int mx = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    sum += el;
    mx = max(mx, el);
  }
  int ans = ceil(double(sum+sum+1)/double(n));
  ans = max(ans, mx);
  cout << ans << '\n';
  return 0;
}
