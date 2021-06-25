/// Problem Name: Anti-Sudoku
/// Problem Link: https://codeforces.com/problemset/problem/1335/D

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
  cin >> tc;
  while (tc--){
    int n = 9;
    string s[n];
    for (int i = 0;i < n;i++){
      cin >> s[i];
    }
    for (int i = 0;i < n;i++){
      for (int j = 0;j < n;j++){
        if (s[i][j] == '1')s[i][j] = '2';
      }
      cout << s[i] << '\n';
    }
  }
  return 0;
}
