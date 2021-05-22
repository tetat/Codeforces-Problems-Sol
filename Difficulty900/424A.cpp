/// Problem Name: Squats
/// Problem Link: https://codeforces.com/problemset/problem/424/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

string make(string &s, int n, char ch, int d){
  for (int i = 0;i < n && d;i++){
    if (s[i] != ch){
      s[i] = ch;
      d--;
    }
  }
  return s;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  int x = 0;
  int X = 0;
  for (int i = 0;i < n;i++){
    s[i]=='x'?x++:X++;
  }
  int d = n/2;
  cout << max(x, X) - d << '\n';
  if (x > X)cout << make(s, n, 'X', x-d) << '\n';
  else cout << make(s, n, 'x', X-d) << '\n';
  return 0;
}
