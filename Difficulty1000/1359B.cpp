/// Problem Name: New Theatre Square
/// Problem Link: https://codeforces.com/problemset/problem/1359/B

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
  cin >> tc;
  while (tc--){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    string s[n];
    for (int i = 0;i < n;i++){
      cin >> s[i];
    }
    int ans = 0;
    int two = min(x+x, y);
    for (int i = 0;i < n;i++){
      for (int j = 0;j < m;j++){
        if (s[i][j]=='.'){
          if (j+1 < m && s[i][j+1]=='.'){
            ans += two;
            s[i][j] = '*';
            s[i][j+1] = '*';
          }else {
            ans += x;
            s[i][j] = '*';
          }
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
