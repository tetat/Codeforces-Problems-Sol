/// Problem Name: Candies!
/// Problem Link: https://codeforces.com/problemset/problem/1189/C

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
  int n;
  cin >> n;
  vector <int> a(n+1, 0);
  int sum = 0;
  for (int i = 1;i <= n;i++){
    cin >> a[i];
    a[i] += a[i-1];
  }
  int q;
  cin >> q;
  while (q--){
    int L, R;
    cin >> L >> R;
    int ans = (a[R]-a[L-1]) / 10;
    cout << ans << '\n';
  }
  return 0;
}
