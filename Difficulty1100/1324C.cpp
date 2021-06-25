/// Problem Name: Frog Jumps
/// Problem Link: https://codeforces.com/problemset/problem/1324/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    string s;
    cin >> s;
    int len = s.size();
    int ans = 0;
    int i = 0;
    while (i < len){
      int cnt = 0;
      while (i < len && s[i]=='L'){i++;cnt++;}
      while (i < len && s[i]=='R')i++;
      ans = max(ans, cnt);
    }
    cout << ans+1 << '\n';
  }
  return 0;
}
