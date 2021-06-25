/// Problem Name: DDoS
/// Problem Link: https://codeforces.com/problemset/problem/1057/B

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
  vector <int> a(n);
  for (int i = 0;i < n;i++){
    cin >> a[i];
    if (i)a[i] += a[i-1];
  }
  int ans = 0;
  for (int i = 0;i < n;i++){
    int cut = 0;
    for (int j = 0;j <= i;j++){
      if (j)cut = a[j-1];
      if (((i-j)+1) * 100 < a[i]-cut){
        ans = max(ans, (i-j)+1);
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
