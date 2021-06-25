/// Problem Name: Battleship
/// Problem Link: https://codeforces.com/problemset/problem/965/B

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

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, k;
  cin >> n >> k;
  string s[n];
  for (int i = 0;i < n;i++){
    cin >> s[i];
  }
  int x = 1;
  int y = 1;
  int mx = 0;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      if (s[i][j]=='.'){
        int h = 1;
        int lft = max(0, j-(k-1));
        int rgt = min(n-1, j+(k-1));
        for (int l = j+1;l <= rgt && s[i][l]=='.';l++)h++;
        for (int l = j-1;l >= lft && s[i][l]=='.';l--)h++;
        int v = 1;
        int up = max(0, i-(k-1));
        int dwn = min(n-1, i+(k-1));
        for (int l = i+1;l <= dwn && s[l][j]=='.';l++)v++;
        for (int l = i-1;l >= up && s[l][j]=='.';l--)v++;
        int tm = max(0, h-(k-1)) + max(0, v-(k-1));
        if (tm > mx){
          x = i+1;
          y = j+1;
          mx = tm;
        }
      }
    }
  }
  cout << x << ' ' << y << '\n';
  return 0;
}
