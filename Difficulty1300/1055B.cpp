/// Problem Name: Alice and Hairdresser
/// Problem Link: https://codeforces.com/problemset/problem/1055/B

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

int main()
{
  FastIO();
  int tc, ca = 0;
  Long n, m, l, el;
  cin >> n >> m >> l;
  vector <Long> v(n+1);
  for (int i = 1;i <= n;i++){
    cin >> v[i];
  }
  int ans = 0;
  int i = 1;
  while (i <= n){
    int cnt = 0;
    while (i <= n && v[i] > l){
      cnt++;
      i++;
    }
    while (i <= n && v[i] <= l)i++;
    if (cnt)ans++;
  }
  while (m--){
    int t;
    cin >> t;
    if (t==0)cout << ans << '\n';
    else {
      Long p, d;
      cin >> p >> d;
      v[p] += d;
      if (v[p]-d > l)continue;
      if (v[p] > l){
        if (p-1 >= 1 && p+1 <= n && v[p-1] > l && v[p+1] > l){
          ans--;
          continue;
        }
        if (p-1 >= 1 && v[p-1] > l)continue;
        if (p+1 <= n && v[p+1] > l)continue;
        ans++;
      }
    }
  }
  return 0;
}
