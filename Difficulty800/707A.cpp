/// Problem Name: Brain's Photos
/// Problem Link: https://codeforces.com/problemset/problem/707/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int C = 0;
  int M = 0;
  int Y = 0;
  int W = 0;
  int G = 0;
  int B = 0;
  int n, m;
  cin >> n >> m;
  char ch;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      cin >> ch;
      if (ch == 'C')C++;
      if (ch == 'M')M++;
      if (ch == 'Y')Y++;
      if (ch == 'W')W++;
      if (ch == 'G')G++;
      if (ch == 'B')B++;
    }
  }
  if (C || M || Y)cout << "#Color" << '\n';
  else cout << "#Black&White" << '\n';
  return 0;
}
