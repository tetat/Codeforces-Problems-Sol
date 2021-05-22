/// Problem Name: Ksusha the Squirrel
/// Problem Link: https://codeforces.com/problemset/problem/299/B

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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int i = 0;
  bool ans = true;
  while (i < n){
    while (s[i]=='.' && i < n)i++;
    int cnt = 0;
    while (s[i]=='#' && i < n){i++;cnt++;}
    if (cnt >= k || cnt >= n-1){
      ans = false;
      break;
    }
  }
  if (ans)cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
