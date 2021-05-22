/// Problem Name: Maximum in Table
/// Problem Link: https://codeforces.com/problemset/problem/509/A

#include <bits/stdc++.h>

using namespace std;

int S[11][11];

int main()
{
  int n;
  cin >> n;
  for (int i = 0;i < n;i++){
    S[i][0] = 1;
    S[0][i] = 1;
  }
  for (int i = 1;i < n;i++){
    for (int j = 1;j < n;j++){
      S[i][j] = S[i-1][j] + S[i][j-1];
    }
  }
  printf("%d\n", S[n-1][n-1]);
  return 0;
}
