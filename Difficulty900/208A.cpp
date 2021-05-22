/// Problem Name: Dubstep
/// Problem Link: https://codeforces.com/problemset/problem/208/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s, ans;
  cin >> s;
  int len = s.size();
  for (int i = 0;i < len-2;i++){
    if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
      s[i] = '1';
      s[i+1] = '1';
      s[i+2] = '1';
    }
  }
  int i = 0;
  while (i < len){
    if (s[i]!='1'){
      while (s[i]!='1' && i < len){
        ans += s[i];
        i++;
      }
      ans += ' ';
    }
    else i++;
  }
  len = ans.size();
  ans.erase(ans.begin()+ans.size()-1);
  cout << ans << '\n';
  return 0;
}
