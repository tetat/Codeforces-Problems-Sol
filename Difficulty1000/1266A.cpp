/// Problem Name: Competitive Programmer
/// Problem Link: https://codeforces.com/problemset/problem/1266/A

#include <bits/stdc++.h>

using namespace std;

int mod(string &s){
  int len = s.size();
  int ret = 0;
  for (int i = 0;i < len;i++){
    ret = ((ret*10) + (s[i]-48)) % 60;
  }
  return ret;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int t, ca = 0;
  cin >> t;
  while (t--){
    string s;
    cin >> s;
    int even = 0;
    int zero = 0;
    int sum = 0;
    int len = s.size();
    for (int i = 0;i < len;i++){
      int d = int(s[i]-48);
      sum += d;
      if (d==0)zero++;
      if (d%2==0)even++;
    }
    if (sum%3==0 && zero>0 && even>1)cout << "red\n";
    else cout << "cyan\n";
  }
  return 0;
}
