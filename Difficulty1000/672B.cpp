/// Problem Name: Different is Good
/// Problem Link: https://codeforces.com/problemset/problem/672/B

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
  int n;
  string s;
  cin >> n >> s;
  if (n > 26)cout << "-1" << '\n';
  else {
    vector <int> mark(26, 0);
    for (int i = 0;i < n;i++){
      mark[s[i]-97]++;
    }
    int ans = 0;
    for (int i = 0;i < 26;i++){
      if (mark[i])ans += mark[i]-1;
    }
    cout << ans << '\n';
  }
  return 0;
}
