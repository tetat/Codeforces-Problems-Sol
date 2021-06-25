/// Problem Name: Pocket Book
/// Problem Link: https://codeforces.com/problemset/problem/152/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define IO cin.tie(0),cout.tie(0)
#define ISWS ios::sync_with_stdio(0)
typedef long long Long;
void FastIO(){ISWS;IO;}

const int N = 1e5;

Long mod = 1e9 + 7;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, m;
  cin >> n >> m;
  vector <string> s(n);
  for (int i = 0;i < n;i++){
    cin >> s[i];
  }
  vector <Long> d(m, 0);
  for (int i = 0;i < m;i++){
    set <char> tm;
    for (int j = 0;j < n;j++){
      tm.insert(s[j][i]);
    }
    d[i] = tm.size();
  }
  Long ans = 1;
  for (int i = 0;i < m;i++){
    ans = (ans*d[i]) % mod;
  }
  cout << ans << '\n';
  return 0;
}
