/// Problem Name: Anton and Letters
/// Problem Link: https://codeforces.com/problemset/problem/443/A

#include <bits/stdc++.h>

using namespace std;

int alpha[26];

int main()
{
  string s;
  getline(cin, s);
  int len = s.size();
  for (int i = 0;i < len;i++){
    if (s[i] >= 97 && s[i] <= 122){
      alpha[s[i]-97]++;
    }
  }
  int ans = 0;
  for (int i = 0;i < 26;i++){
    if (alpha[i])ans++;
  }
  cout << ans << '\n';
  return 0;
}
