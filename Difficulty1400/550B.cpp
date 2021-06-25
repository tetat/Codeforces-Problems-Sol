/// Problem Name: Preparing Olympiad
/// Problem Link: https://codeforces.com/problemset/problem/550/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int m[15];

int p(int n){
  if (n < 2)return 2;
  if (m[n])return m[n];
  m[n] = p((n+1)/2) * p(n/2);
  return m[n];
}

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, L, R, x;
  cin >> n >> L >> R >> x;
  vector <int> v(n);
  for (int i = 0;i < n;i++){
    cin >> v[i];
  }
  int len = p(n);
  //cout << len << '\n';
  int ans = 0;
  for (int i = 2;i < len;i++){
    int mx = 0;
    int mn = INT_MAX;
    int sum = 0;
    int tot = 0;
    for (int j = 0;j < n;j++){
      if ((i & (1<<j))){
        mx = max(mx, v[j]);
        mn = min(mn, v[j]);
        sum += v[j];
        tot++;
      }
    }
    if (mx-mn >= x && sum >= L && sum <= R && tot > 1)ans++;
  }
  cout << ans << '\n';
  return 0;
}
