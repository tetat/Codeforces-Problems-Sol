/// Problem Name: Case of the Zeros and Ones
/// Problem Link: https://codeforces.com/problemset/problem/556/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, zero = 0, one = 0;
  cin >> n;
  string s;
  cin >> s;
  for (int i = 0;i < n;i++){
    if (s[i]=='0')zero++;
    if (s[i]=='1')one++;
  }
  cout << abs(zero-one) << '\n';
  return 0;
}
