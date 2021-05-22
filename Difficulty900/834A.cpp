/// Problem Name: The Useless Toy
/// Problem Link: https://codeforces.com/problemset/problem/834/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  string s;
  char a, b;
  cin >> a >> b;
  s += a;
  s += b;
  int n;
  cin >> n;
  /// 118 60 94 62
  n = n % 4;
  char ch = s[0];
  int d[2] = {0, 0};
  for (int i = 0;i < n;i++){
    if (ch == 'v')ch = '<';
    else if (ch == '<')ch = '^';
    else if (ch == '^')ch = '>';
    else if (ch == '>')ch = 'v';
  }
  if (ch == s[1])d[0] = 1;
  ch = s[0];
  for (int i = 0;i < n;i++){
    if (ch == 'v')ch = '>';
    else if (ch == '>')ch = '^';
    else if (ch == '^')ch = '<';
    else if (ch == '<')ch = 'v';
  }
  if (ch == s[1])d[1] = 1;
  if (d[0] && !d[1])cout << "cw" << '\n';
  else if (!d[0] && d[1])cout << "ccw" << '\n';
  else cout << "undefined" << '\n';
  return 0;
}
