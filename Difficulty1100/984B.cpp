/// Problem Name: Minesweeper
/// Problem Link: https://codeforces.com/problemset/problem/984/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

/// 8 directions
int x[] = {0, 0, 1, -1, -1, 1, 1, -1};
int y[] = {1, -1, 0, 0, 1, 1, -1, -1};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, m;
  cin >> n >> m;
  string s[n];
  for (int i = 0;i < n;i++)cin >> s[i];
  string ans = "YES";
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      if (s[i][j] != '*'){
        int have = s[i][j]-48;
        if (s[i][j]=='.')have = 0;
        int cnt = 0;
        for (int k = 0;k < 8;k++){
          if (i+x[k]>=0 && i+x[k]<n && j+y[k]>=0 && j+y[k]<m){
            if (s[i+x[k]][j+y[k]] == '*')cnt++;
          }
        }
        if (have != cnt){
          ans = "NO";
          break;
        }
      }
    }
    if (ans=="NO")break;
  }
  cout << ans << '\n';
  return 0;
}
