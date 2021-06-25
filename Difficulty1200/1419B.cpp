/// Problem Name: Stairs
/// Problem Link: https://codeforces.com/problemset/problem/1419/B

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    Long x;
    cin >> x;
    Long p = 2;
    Long two = 2;
    int ans = 0;
    while (x > 0){
      x -= (p*(p-1))/two;
      if (x >= 0)ans++;
      p += p;
    }
    cout << ans << '\n';
  }
  return 0;
}
