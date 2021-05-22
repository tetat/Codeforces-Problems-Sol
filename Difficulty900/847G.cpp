/// Problem Name: University Classes
/// Problem Link: https://codeforces.com/problemset/problem/847/G

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
  vector <int> mark(7, 0);
  cin >> n;
  string s;
  for (int i = 0;i < n;i++){
    cin >> s;
    for (int j = 0;j < 7;j++){
      if (s[j] == '1')mark[j]++;
    }
  }
  int ans = 0;
  for (int i = 0;i < 7;i++){
    ans = max(ans, mark[i]);
  }
  cout << ans << '\n';
  return 0;
}
