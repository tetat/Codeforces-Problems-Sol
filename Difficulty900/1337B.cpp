/// Problem Name: Kana and Dragon Quest game
/// Problem Link: https://codeforces.com/problemset/problem/1337/B

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
  cin >> tc;
  while (tc--){
    Long x, n, m;
    cin >> x >> n >> m;
    Long cut = m*10;
    string ans = "NO";
    while (n-- && x > 20){
      x /= 2;
      x += 10;
    }
    if (x<=cut)ans = "YES";
    cout << ans << '\n';
  }
  return 0;
}
