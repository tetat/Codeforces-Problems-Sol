/// Problem Name: Square Filling
/// Problem Link: https://codeforces.com/problemset/problem/1207/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, m, el;
  cin >> n >> m;
  vector <int> mat[n];
  vector <int> nm[n];
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      cin >> el;
      mat[i].pb(el);
      nm[i].pb(0);
    }
  }
  vector <pair <int, int> > v;
  for (int i = 0;i < n-1;i++){
    for (int j = 0;j < m-1;j++){
      if (mat[i][j]==1 && mat[i][j+1]==1 && mat[i+1][j]==1 && mat[i+1][j+1]==1){
        nm[i][j]=1;
        nm[i][j+1]=1;
        nm[i+1][j]=1;
        nm[i+1][j+1]=1;
        v.pb(mp(i+1, j+1));
      }
    }
  }
  bool ans = true;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      if (mat[i][j]!=nm[i][j]){
        ans = false;
        break;
      }
    }
    if (!ans)break;
  }
  if (ans){
    int len = v.size();
    cout << len << '\n';
    for (int i = 0;i < len;i++){
      cout << v[i].first << ' ' << v[i].second << '\n';
    }
  }else cout << "-1" << '\n';
  return 0;
}
