/// Problem Name: HQ9+
/// Problem Link: https://codeforces.com/problemset/problem/133/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin >> s;
  int len = s.size();
  bool ans = false;
  for (int i = 0;i < len;i++){
    if (s[i]=='H' || s[i]=='Q' || s[i]=='9'){
      ans = true;
      break;
    }
  }
  if (ans)cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
