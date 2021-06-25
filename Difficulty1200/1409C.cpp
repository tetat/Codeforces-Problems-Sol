/// Problem Name: Yet Another Array Restoration
/// Problem Link: https://codeforces.com/problemset/problem/1409/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define IO cin.tie(0),cout.tie(0)
#define ISWS ios::sync_with_stdio(0)
typedef long long Long;
void FastIO(){ISWS;IO;}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, x, y;
    cin >> n >> x >> y;
    if (n==2){
      cout << x << ' ' << y << '\n';
    }else {
      int d = y-x;
      vector <int> f;
      for (int i = 1;i*i <= d;i++){
        if (d%i == 0){
          f.pb(i);
          if (i*i != d)f.pb(d/i);
        }
      }
      sort(f.begin(), f.end());
      vector <int> a;
      for (int i = 0;i < f.size();i++){
        int L = n;
        vector <int> tm;
        L -= 1;
        tm.pb(x);
        for (int j = x+f[i];j <= y && L;j += f[i]){
          tm.pb(j);
          L--;
        }
        if (L == 0 && tm[n-1]==y){
          a = tm;
          break;
        }
        if (L > 0){
          for (int j = x-f[i];j >= 1 && L;j -= f[i]){
            tm.pb(j);
            L--;
          }
          for (int j = y+f[i]; L ;j += f[i]){
            tm.pb(j);
            L--;
          }
          a = tm;
          break;
        }
      }
      for (int i = 0;i < n;i++){
        cout << a[i] << ' ';
      }cout << '\n';
    }
  }
  return 0;
}
