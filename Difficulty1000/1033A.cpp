/// Problem Name: King Escape
/// Problem Link: https://codeforces.com/problemset/problem/1033/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 1e5;
int x_r[] = {0, 0, -1, 1, -1, -1, 1, 1};
int y_c[] = {-1, 1, 0, 0, -1, 1, -1, 1};
int dx, dy;
int ax, ay;
int bx, by;
int cx, cy;
bool mark[1001][1001];
bool found = false;
int n;

void dfs_mark(int x, int y){
  if (x > n || x < 1 || y > n || y < 1)return;
  mark[x][y] = true;
  dfs_mark(x+dx, y+dy);
}

void dfs(int x, int y){
  if (x > n || x < 1 || y > n || y < 1)return;
  if (mark[x][y])return;
  mark[x][y] = true;
  //cout << x << ' ' << y << '\n';
  if (x==cx && y==cy){
    found = true;
    return;
  }
  dfs(x, y-1);
  dfs(x, y+1);
  dfs(x-1, y);
  dfs(x+1, y);
  dfs(x-1, y-1);
  dfs(x-1, y+1);
  dfs(x+1, y-1);
  dfs(x+1, y+1);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> n;
  cin >> ay >> ax;
  cin >> by >> bx;
  cin >> cy >> cx;
  for (int i = 0;i < 8;i++){
    dx = x_r[i];
    dy = y_c[i];
    //cout << "test\n";
    dfs_mark(ax, ay);
    //cout << "test\n";
  }
//  for (int i = 1;i <= n;i++){
//    for (int j = 1;j <= n;j++){
//      if (mark[i][j])cout << "1 ";
//      else cout << "0 ";
//    }cout << '\n';
//  }
  //cout << "test\n";
  dfs(bx, by);
  //cout << "test\n";
  if (found)cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
