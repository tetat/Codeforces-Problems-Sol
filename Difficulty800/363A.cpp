/// Problem Name: Soroban
/// Problem Link: https://codeforces.com/problemset/problem/363/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  map <int, string> m;
  m[0] = "O-|-OOOO";
  m[1] = "O-|O-OOO";
  m[2] = "O-|OO-OO";
  m[3] = "O-|OOO-O";
  m[4] = "O-|OOOO-";
  m[5] = "-O|-OOOO";
  m[6] = "-O|O-OOO";
  m[7] = "-O|OO-OO";
  m[8] = "-O|OOO-O";
  m[9] = "-O|OOOO-";
  string s;
  cin >> s;
  for (int i = s.size()-1;i >= 0;i--){
    cout << m[s[i]-48] << '\n';
  }
  return 0;
}
