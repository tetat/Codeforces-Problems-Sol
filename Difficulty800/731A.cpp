/// Problem Name: Night at the Museum
/// Problem Link: https://codeforces.com/problemset/problem/731/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin >> s;
  int len = s.size();
  int ans = 0;
  reverse(s.begin(), s.end());
  s += 'a';
  //reverse(s.begin(), s.end());
  for (int i = len-1;i >= 0;i--){
    int L = s[i+1]-97;
    int R = s[i]-97;
    if (L > R)swap(L, R);
    ans += min(abs(L-R), (26+L)-R);
  }
  cout << ans << '\n';
  return 0;
}
