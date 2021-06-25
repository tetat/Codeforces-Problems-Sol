/// Problem Name: Increasing Matrix
/// Problem Link: https://codeforces.com/problemset/problem/1231/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, m, el;
  cin >> n >> m;
  vector <vector <int> > v(n);
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      cin >> el;
      v[i].pb(el);
    }
  }
  for (int i = n-2;i >= 0;i--){
    for (int j = m-2;j >= 0;j--){
      if (v[i][j] == 0){
        v[i][j] = min(v[i][j+1], v[i+1][j]) - 1;
      }
    }
  }
//  for (int i = 0;i < n;i++){
//    for (int j = 0;j < m;j++){
//      cout << v[i][j] << ' ';
//    }cout << '\n';
//  }
  bool ans = true;
  for (int i = 0;i < n;i++){
    for (int j = 1;j < m;j++){
      if (v[i][j] <= v[i][j-1]){
        ans = false;
        break;
      }
    }
    if (ans == false)break;
  }
  if (ans){
    for (int i = 0;i < m;i++){
      for (int j = 1;j < n;j++){
        if (v[j][i] <= v[j-1][i]){
          ans = false;
          break;
        }
      }
      if (ans == false)break;
    }
  }
  if (ans == false)cout << "-1" << '\n';
  else {
    Long sum = 0;
    for (int i = 0;i < n;i++){
      for (int j = 0;j < m;j++){
        sum += Long(v[i][j]);
      }
    }
    cout << sum << '\n';
  }
  return 0;
}
