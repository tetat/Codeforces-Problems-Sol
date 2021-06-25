/// Problem Name: Filling the Grid
/// Problem Link: https://codeforces.com/problemset/problem/1228/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e3;

int grid[N+1][N+1];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int h, w, el;
  cin >> h >> w;
  vector <int> a;
  vector <int> b;
  for (int i = 0;i < h;i++){
    cin >> el;
    a.pb(el);
    for (int j = 0;j < el;j++){
      grid[i][j] = 1;
    }
    if (el!=w)grid[i][el] = 2;
  }
  bool pos = true;
  for (int i = 0;i < w;i++){
    cin >> el;
    b.pb(el);
    for (int j = 0;j < el;j++){
      if (grid[j][i]==2)pos = false;
      else grid[j][i] = 1;
    }
    if (el!=h){
      if (grid[el][i]==1)pos = false;
      else grid[el][i] = 2;
    }
  }
  Long ans = 0;
  Long em = 0;
  Long two = 0;
  for (int i = 0;i < h;i++){
    for (int j = 0;j < w;j++){
      if (grid[i][j]==0)em++;
      if (grid[i][j]==2)two++;
    }
  }
  if (pos){
    Long m = 1000000007;
    ans = 1;
    for (int i = 0;i < em;i++){
      ans = (ans+ans) % m;
    }
  }
  cout << ans << '\n';
  return 0;
}
