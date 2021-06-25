/// Problem Name: A Compatible Pair
/// Problem Link: https://codeforces.com/problemset/problem/934/A

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
  vector <Long> a(n);
  vector <Long> b(m);
  for (int i = 0;i < n;i++){
    cin >> a[i];
  }
  for (int i = 0;i < m;i++){
    cin >> b[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  Long ans = max(a[1]*b[0], max(a[1]*b[m-1], max(a[n-1]*b[0], a[n-1]*b[m-1])));
  ans = min(ans, max(a[0]*b[0], max(a[0]*b[m-1], max(a[n-2]*b[0], a[n-2]*b[m-1]))));
  cout << ans << '\n';
  return 0;
}
