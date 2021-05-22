/// Problem Name: Protect Sheep
/// Problem Link: https://codeforces.com/problemset/problem/948/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

bool found;
string field[500];
int mark[501][501];
int R, C;

void dfs(int x, int y){
  if (x >= R || y >= C || x < 0 || y < 0)return;
  //cout << mark[x][y] << '\n';
  if (mark[x][y] == 1)return;
  //cout << field[x] << '\n';
  mark[x][y] = 1;
  if (field[x][y] == 'W'){
    if (x < R && x >= 0 && y+1 < C && y+1 >= 0){
      if (field[x][y+1] == 'S'){
        found = true;
        return;
      }
      if (field[x][y+1] == '.')field[x][y+1] = 'D';
    }
    if (x < R && x >= 0 && y-1 < C && y-1 >= 0){
      if (field[x][y-1] == 'S'){
        found = true;
        return;
      }
      if (field[x][y-1] == '.')field[x][y-1] = 'D';
    }
    if (x+1 < R && x+1 >= 0 && y < C && y >= 0){
      if (field[x+1][y] == 'S'){
        found = true;
        return;
      }
      if (field[x+1][y] == '.')field[x+1][y] = 'D';
    }
    if (x-1 < R && x-1 >= 0 && y < C && y >= 0){
      if (field[x-1][y] == 'S'){
        found = true;
        return;
      }
      if (field[x-1][y] == '.')field[x-1][y] = 'D';
    }
  }
  dfs(x, y+1);
  dfs(x, y-1);
  dfs(x-1, y);
  dfs(x+1, y);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> R >> C;
  for (int i = 0;i < R;i++){
    cin >> field[i];
  }
  dfs(0, 0);
  if (found)cout << "No" << '\n';
  else {
    cout << "Yes" << '\n';
    for (int i = 0;i < R;i++){
      cout << field[i] << '\n';
    }
  }
  return 0;
}
