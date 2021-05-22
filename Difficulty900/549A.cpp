/// Problem Name: Face Detection
/// Problem Link: https://codeforces.com/problemset/problem/549/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int n, m;
string s[51];
int cnt = 0;
int mark[51][51];

void dfs(int i, int j){
  if (i >= n || j >= m)return;
  if (mark[i][j])return;
  mark[i][j] = 1;
  if (i < n-1 && j < m-1){
    vector <int> face;
    face.pb(s[i][j] - 96);
    face.pb(s[i][j+1] - 96);
    face.pb(s[i+1][j] - 96);
    face.pb(s[i+1][j+1] - 96);
    sort(face.begin(), face.end());
    if (face[0]==1 && face[1]==3 && face[2]==5 && face[3]==6)cnt++;
  }
  dfs(i, j+1);
  dfs(i+1, j);
  dfs(i+1, j+1);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> n >> m;
  for (int i = 0;i < n;i++){
    cin >> s[i];
  }
  dfs(0, 0);
  cout << cnt << '\n';
  return 0;
}
