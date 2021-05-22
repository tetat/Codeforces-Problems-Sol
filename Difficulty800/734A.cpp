/// Problem Name: Anton and Danik
/// Problem Link: https://codeforces.com/problemset/problem/734/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, A = 0, D = 0;
  string s;
  cin >> n >> s;
  for (int i = 0;i < n;i++){
    if (s[i]=='A')A++;
    else D++;
  }
  if (A > D)cout << "Anton" << '\n';
  else if (A < D)cout << "Danik" << '\n';
  else cout << "Friendship" << '\n';
  return 0;
}
