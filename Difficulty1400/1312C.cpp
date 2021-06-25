/// Problem Name: Adding Powers
/// Problem Link: https://codeforces.com/problemset/problem/1312/C

/// In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

Long lim = 1e16;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    Long n, k;
    cin >> n >> k;
    vector <Long> a(n);
    for (int i = 0;i < n;i++){
      cin >> a[i];
    }
    Long p = 1;
    while (p < lim){
      p *= k;
    }
    if (p > lim)p /= k;
    while (p > 0){
      int po = -1;
      for (int i = 0;i < n;i++){
        if (p == a[i]){
          a[i] -= p;
          po = i;
          break;
        }
      }
      if (po == -1){
        Long mx = 0;
        for (int i = 0;i < n;i++){
          if (mx < a[i]){
            po = i;
            mx = a[i];
          }
        }
        if (po != -1){
          if (a[po] >= p)a[po] -= p;
        }
      }
      p /= k;
    }
//    for (int i = 0;i < n;i++){
//      cout << a[i] << ' ';
//    }cout << '\n';
    string ans = "YES";
    for (int i = 0;i < n;i++){
      if (a[i]){
        ans = "NO";
        break;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
