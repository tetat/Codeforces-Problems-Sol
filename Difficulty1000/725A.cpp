/// Problem Name: Jumping Ball
/// Problem Link: https://codeforces.com/problemset/problem/725/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e4;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  int ans = 0;
  int i = 0;
  while (i < n && s[i]=='<'){
    ans++;
    i++;
  }
  i = n-1;
  while (i >= 0 && s[i]=='>'){
    ans++;
    i--;
  }
  cout << ans << '\n';
  return 0;
}
