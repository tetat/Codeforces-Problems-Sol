/// Problem Name: New Year and Naming
/// Problem Link: https://codeforces.com/problemset/problem/1284/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  string s_n[n];
  string s_m[m];
  for (int i = 0;i < n;i++){
    cin >> s_n[i];
  }
  for (int i = 0;i < m;i++){
    cin >> s_m[i];
  }
  int q;
  cin >> q;
  while (q--){
    int y;
    cin >> y;
    int a = y%n;
    int b = y%m;
    if (a==0)a = n;
    if (b==0)b = m;
    a--;
    b--;
    cout << s_n[a] << s_m[b] << '\n';
  }
  return 0;
}
