/// Problem Name: Dead Pixel
/// Problem Link: https://codeforces.com/problemset/problem/1315/A

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
  cin >> tc;
  while (tc--){
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int ans = 0;
    x++;y++;
    ans = max(ans, max(a-x, x-1) * b);
    ans = max(ans, max(b-y, y-1) * a);
    cout << ans << '\n';
  }
  return 0;
}
