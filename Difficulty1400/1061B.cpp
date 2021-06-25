/// Problem Name: Views Matter
/// Problem Link: https://codeforces.com/problemset/problem/1061/B

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
  int n, m;
  cin >> n >> m;
  vector <int> a(n);
  map <int, int> S;
  int mx = 0;
  Long tot = 0;
  for (int i = 0;i < n;i++){
    cin >> a[i];
    mx = max(mx, a[i]);
    S[a[i]]++;
    tot += a[i];
  }
  int len = min(n, mx);
  Long ans = max(n, mx);
  for (int i = 1;i <= len;i++){
    if (S[i]==0)ans++;
    else ans = max(Long(max(n, mx)), ans-(S[i]-1));
  }
  for (int i = 0;i < n;i++){
    if (a[i] > len && ans > max(n, mx))ans--;
  }
  ans = max(Long(0), tot - ans);
  cout << ans << '\n';
  return 0;
}
