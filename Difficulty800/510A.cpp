/// Problem Name: Fox And Snake
/// Problem Link: https://codeforces.com/problemset/problem/510/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  string s[n];
  bool flag = true;
  for (int i = 0;i < n;i++){
    if (i%2){
      if (flag){
        for (int j = 0;j < m-1;j++)s[i] += '.';
        s[i] += '#';
        flag = false;
      }
      else {
        s[i] += '#';
        for (int j = 1;j < m;j++)s[i] += '.';
        flag = true;
      }
    }
    else {
      for (int j = 0;j < m;j++)s[i] += '#';
    }
    cout << s[i] << '\n';
  }
  return 0;
}
