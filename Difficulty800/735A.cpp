/// Problem Name: Ostap and Grasshopper
/// Problem Link: https://codeforces.com/problemset/problem/735/A

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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int in = 1;
  bool ok = false;
  bool go = false;
  for (int i = 0;i < n;i+=in){
    if (s[i] == 'G'){in = k;go = true;}
    if (s[i] == '#' && go)break;
    if (s[i] == 'T' && go){
      ok = true;
      break;
    }
  }
  if (ok == false){
    in = 1;
    go = false;
    for (int i = n-1;i >= 0;i-=in){
      if (s[i] == 'G'){in = k;go = true;}
      if (s[i] == '#' && go)break;
      if (s[i] == 'T' && go){
        ok = true;
        break;
      }
    }
  }
  if (ok)cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
