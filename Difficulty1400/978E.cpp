/// Problem Name: Bus Video System
/// Problem Link: https://codeforces.com/problemset/problem/978/E

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  int n, w;
  cin >> n >> w;
  vector <int> a(n);
  int sum = 0;
  int mn = INT_MAX;
  int mx = -mn;
  for (int i = 0;i < n;i++){
    cin >> a[i];
    sum += a[i];
    mn = min(mn, sum);
    mx = max(mx, sum);
  }
  int ans = 0;
  if (mn >= 0)ans = max(0, (w-mx)+1);
  else if (mx <= 0)ans = max(0, (w-(-mn))+1);
  else {
    ans = max(0, (w-(mx-mn))+1);
    ans = min(ans, max(0, (w-mx))+1);
    ans = min(ans, max(0, (w-(-mn)))+1);
  }
  cout << ans << '\n';
  return 0;
}
