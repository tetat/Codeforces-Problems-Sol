/// Problem Name: Wet Shark and Bishops
/// Problem Link: https://codeforces.com/problemset/problem/621/B

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

const int N = 1e3;

bool mark[N+1][N+1];

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, a, b;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> a >> b;
    mark[a][b] = true;
  }
  Long ans = 0;
  n = 1000;
  for (int i = 1;i <= n;i++){
    int x = 1;
    int y = i;
    Long cnt = 0;
    while (y <= n){
      if (mark[x][y])cnt++;
      x++;
      y++;
    }
    if (cnt>1)ans += (cnt*(cnt-1))/2;
    x = 1;
    y = i;
    cnt = 0;
    while (y >= 1){
      if (mark[x][y])cnt++;
      x++;
      y--;
    }
    if (cnt>1)ans += (cnt*(cnt-1))/2;
  }
  for (int i = 2;i <= n;i++){
    int x = i;
    int y = 1;
    Long cnt = 0;
    while (x <= n){
      if (mark[x][y])cnt++;
      x++;
      y++;
    }
    if (cnt>1)ans += (cnt*(cnt-1))/2;
    x = i;
    y = 1000;
    cnt = 0;
    while (x <= n){
      if (mark[x][y])cnt++;
      x++;
      y--;
    }
    if (cnt>1)ans += (cnt*(cnt-1))/2;
  }
  cout << ans << '\n';
  return 0;
}
