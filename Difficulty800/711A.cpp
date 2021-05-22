/// Problem Name: Bus to Udayland
/// Problem Link: https://codeforces.com/problemset/problem/711/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  string s[n];
  bool ok = true;
  for (int i = 0;i < n;i++){
    cin >> s[i];
    if (ok){
      if (s[i][0]=='O' && s[i][1]=='O'){
        s[i][0] = '+';
        s[i][1] = '+';
        ok = false;
      }
      else if (s[i][3]=='O' && s[i][4]=='O'){
        s[i][3] = '+';
        s[i][4] = '+';
        ok = false;
      }
    }
  }
  if (ok)cout << "NO" << '\n';
  else {
    cout << "YES" << '\n';
    for (int i = 0;i < n;i++){
      cout << s[i] << '\n';
    }
  }
  return 0;
}
