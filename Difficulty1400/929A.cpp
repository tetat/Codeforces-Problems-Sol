/// Problem Name: Прокат велосипедов
/// Problem Link: https://codeforces.com/problemset/problem/929/A

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
  int n, k;
  cin >> n >> k;
  vector <int> a(n);
  for (int i = 0;i < n;i++){
    cin >> a[i];
  }
  int ans = 0;
  int I = 0;
  int J = 1;
  bool ok = false;
  while (J < n){
    int cnt = 0;
    while (J < n && a[J]-a[I] <= k){
      cnt++;
      J++;
    }
    if (cnt){
      ans++;
      ok = true;
    }else {
      ok = false;
      break;
    }
    I = J-1;
  }
  if (!ok)ans = -1;
  cout << ans << '\n';
  return 0;
}
