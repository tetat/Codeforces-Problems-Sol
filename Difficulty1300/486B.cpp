/// Problem Name: OR in Matrix
/// Problem Link: https://codeforces.com/problemset/problem/486/B

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

const int N = 1e6;

int main()
{
  FastIO();
  int tc, ca = 0;
  int m, n;
  cin >> m >> n;
  int B[m][n];
  for (int i = 0;i < m;i++){
    for (int j = 0;j < n;j++){
      cin >> B[i][j];
    }
  }
  int A[m][n];
  for (int i = 0;i < m;i++){
    for (int j = 0;j < n;j++){
      A[i][j] = 1;
    }
  }
  for (int i = 0;i < m;i++){
    for (int j = 0;j < n;j++){
      if (B[i][j]==0){
        for (int x = 0;x < m;x++){
          A[x][j] = 0;
        }
        for (int y = 0;y < n;y++){
          A[i][y] = 0;
        }
      }
    }
  }
  string ans = "YES";
  for (int i = 0;i < m;i++){
    for (int j = 0;j < n;j++){
      int check = 0;
      for (int x = 0;x < m;x++){
        check = check | A[x][j];
      }
      for (int y = 0;y < n;y++){
        check = check | A[i][y];
      }
      if (check != B[i][j]){
        ans = "NO";
        break;
      }
    }
    if (ans=="NO")break;
  }
  cout << ans << '\n';
  if (ans=="YES"){
    for (int i = 0;i < m;i++){
      for (int j = 0;j < n;j++){
        cout << A[i][j] << ' ';
      }cout << '\n';
    }
  }
  return 0;
}
