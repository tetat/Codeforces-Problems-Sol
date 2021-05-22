/// Problem Name: Floor Number
/// Problem Link: https://codeforces.com/problemset/problem/1426/A

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
  cin.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, x;
    cin >> n >> x;
    int ans = 1;
    n = max(0, n-2);
    if (n%x)ans += (n/x)+1;
    else ans += n/x;
    cout << ans << '\n';
  }
  return 0;
}
