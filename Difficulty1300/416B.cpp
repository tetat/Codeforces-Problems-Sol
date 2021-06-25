/// Problem Name: Art Union
/// Problem Link: https://codeforces.com/problemset/problem/416/B

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
  int m, n, el;
  cin >> m >> n;
  vector <int> v[m];
  for (int i = 0;i < m;i++){
    for (int j = 0;j < n;j++){
      cin >> el;
      v[i].pb(el);
    }
  }
  //for (int i = 0;i < m;i++){
    for (int j = 1;j < n;j++){
      v[0][j] += v[0][j-1];
    }
  //}
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      int mx = 0;
      if (i-1>=0)mx = v[j][i-1];
      if (j)v[j][i] += max(v[j-1][i], mx);
    }
  }
  for (int i = 0;i < m;i++){
    cout << v[i][n-1] << ' ';
  }cout << '\n';
  return 0;
}
