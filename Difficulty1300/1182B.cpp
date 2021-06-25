/// Problem Name: Plus from Picture
/// Problem Link: https://codeforces.com/problemset/problem/1182/B

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

const int N = 1e5;

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
  int str = 0;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      if (s[i][j]=='*')str++;
    }
  }
  int st = 0;
  for (int i = 1;i < n-1;i++){
    for (int j = 1;j < m-1;j++){
      if (s[i][j]=='*' && s[i][j+1]=='*' && s[i][j-1]=='*' && s[i+1][j]=='*' && s[i-1][j]=='*'){
        st += 1;
        int x = i;
        int y = j+1;
        while (y < m && s[x][y]=='*'){
          st++;
          y++;
        }
        x = i;
        y = j-1;
        while (y >= 0 && s[x][y]=='*'){
          st++;
          y--;
        }
        x = i+1;
        y = j;
        while (x < n && s[x][y]=='*'){
          st++;
          x++;
        }
        x = i-1;
        y = j;
        while (x >= 0 && s[x][y]=='*'){
          st++;
          x--;
        }
        break;
      }
    }
    if (st)break;
  }
  if (st==str && str)cout << "yes" << '\n';
  else cout << "no" << '\n';
  return 0;
}
