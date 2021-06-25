/// Problem Name: Serval and Toy Bricks
/// Problem Link: https://codeforces.com/problemset/problem/1153/B

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
  int n, m, h, el;
  cin >> n >> m >> h;
  vector <int> a;
  for (int i = 0;i < m;i++){
    cin >> el;
    a.pb(el);
  }
  vector <int> b;
  for (int i = 0;i < n;i++){
    cin >> el;
    b.pb(el);
  }
  vector <int> mat[n];
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      cin >> el;
      mat[i].pb(el);
    }
  }
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      if (mat[i][j]){
        mat[i][j] = min(a[j], b[i]);
      }
    }
  }
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      cout << mat[i][j];
      if (j != m-1)cout << ' ';
    }cout << '\n';
  }
  return 0;
}
