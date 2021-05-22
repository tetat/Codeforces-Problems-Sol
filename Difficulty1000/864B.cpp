/// Problem Name: Polycarp and Letters
/// Problem Link: https://codeforces.com/problemset/problem/864/B

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
  int i = 0;
  int ans = 0;
  while (i < n){
    vector <int> mark(26, 0);
    while (i < n && s[i]>=97){mark[s[i]-97]++;i++;}
    while (i < n && s[i]<=90)i++;
    int mx = 0;
    for (int j = 0;j < 26;j++){
      if (mark[j])mx++;
    }
    ans = max(ans, mx);
  }
  cout << ans << '\n';
  return 0;
}
