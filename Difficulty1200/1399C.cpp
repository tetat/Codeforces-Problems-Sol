/// Problem Name: Boats Competition
/// Problem Link: https://codeforces.com/problemset/problem/1399/C

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

const int N = 1e8;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0;i < n;i++){
      cin >> v[i];
    }
    vector <int> cnt(n+n+1, 0);
    for (int i = 0;i < n;i++){
      for (int j = i+1;j < n;j++){
        cnt[v[i]+v[j]]++;
      }
    }
    int ans = 0;
    for (int i = 2;i <= n+n;i++){
      if (cnt[i]){
        vector <int> mark(n, 0);
        int mx = 0;
        for (int j = 0;j < n;j++){
          if (!mark[j]){
            for (int k = 0;k < n;k++){
              if (j != k && !mark[k]){
                if (v[j]+v[k] == i){
                  mx++;
                  mark[j] = 1;
                  mark[k] = 1;
                  break;
                }
              }
            }
          }
        }
        ans = max(ans, mx);
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
