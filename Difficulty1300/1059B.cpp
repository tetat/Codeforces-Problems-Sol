/// Problem Name: Forgery
/// Problem Link: https://codeforces.com/problemset/problem/1059/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int x[] = {0, 0, -1, 1, 1, -1, 1, -1};
int y[] = {1, -1, 0, 0, 1, 1, -1, -1};

int main()
{
  faster();
  int tc, ca = 0;
  int n, m;
  cin >> n >> m;
  string s[n];
  for (int i = 0;i < n;i++){
    cin >> s[i];
  }
  string forge[n];
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      forge[i] += '.';
    }
  }
  for (int i = 1;i < n-1;i++){
    for (int j = 1;j < m-1;j++){
      bool ok = true;
      for (int k = 0;k < 8;k++){
        int xx = i+x[k];
        int yy = j+y[k];
        if (s[xx][yy] != '#'){
          ok = false;
          break;
        }
      }
      if (ok){
        for (int k = 0;k < 8;k++){
          int xx = i+x[k];
          int yy = j+y[k];
          forge[xx][yy] = '#';
        }
      }
    }
  }
  string ans = "yes";
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      if (s[i][j] != forge[i][j]){
        ans = "no";
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
