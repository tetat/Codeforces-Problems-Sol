/// Problem Name: Keyboard
/// Problem Link: https://codeforces.com/problemset/problem/474/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s1 = "qwertyuiop";
  string s2 = "asdfghjkl;";
  string s3 = "zxcvbnm,./";
  int len = 10;
  string ch, s;
  cin >> ch >> s;
  int n = s.size();
  string ans;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < len;j++){
      if (s[i] == s1[j]){
        if (ch == "R")ans += s1[j-1];
        if (ch == "L")ans += s1[j+1];
        break;
      }
    }
    for (int j = 0;j < len;j++){
      if (s[i] == s2[j]){
        if (ch == "R")ans += s2[j-1];
        if (ch == "L")ans += s2[j+1];
        break;
      }
    }
    for (int j = 0;j < len;j++){
      if (s[i] == s3[j]){
        if (ch == "R")ans += s3[j-1];
        if (ch == "L")ans += s3[j+1];
        break;
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
