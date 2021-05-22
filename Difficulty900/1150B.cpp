/// Problem Name: Tiling Challenge
/// Problem Link: https://codeforces.com/problemset/problem/1150/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

string v[51];
int mark[51][51];
int n;

void paint(int i, int j){
  if (i < 0 || i >= n || j < 0 || j >= n)return;
  if (mark[i][j])return;
  mark[i][j] = 1;
  if (i+1<n && j+1<n && i-1>=0 && j-1>=0){
    if (v[i][j]=='.' && v[i][j+1]=='.' && v[i][j-1]=='.' && v[i+1][j]=='.' && v[i-1][j]=='.'){
      v[i][j] = '#';
      v[i][j+1] = '#';
      v[i][j-1] = '#';
      v[i+1][j] = '#';
      v[i-1][j] = '#';
    }
  }
  paint(i, j+1);
  paint(i, j-1);
  paint(i+1, j);
  paint(i-1, j);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> v[i];
  }
  paint(0, 0);
  int sharp = 0;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      if (v[i][j] == '#')sharp++;
    }
  }
  if (sharp == n*n)cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
