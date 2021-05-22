/// Problem Name: Word
/// Problem Link: https://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin >> s;
  int len = s.size();
  int U = 0;
  int L = 0;
  for (int i = 0;i < len;i++){
    if (s[i] >= 97)L++;
    else U++;
  }
  if (U <= L){
    for (int i = 0;i < len;i++){
      if (s[i] <= 90)s[i] += 32;
    }
  }
  else {
    for (int i = 0;i < len;i++){
      if (s[i] >= 97)s[i] -= 32;
    }
  }
  cout << s << '\n';
  return 0;
}
