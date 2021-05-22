/// Problem Name: Stones
/// Problem Link: https://codeforces.com/problemset/problem/1236/A

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
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    int d = min(b, c/2);
    b -= d;
    c -= d+d;
    ans += d*3;
    d = min(a, b/2);
    a -= d;
    b -= d+d;
    ans += d*3;
    cout << ans << '\n';

  }
  return 0;
}
