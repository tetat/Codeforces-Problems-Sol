/// Problem Name: Buying Torches
/// Problem Link: https://codeforces.com/problemset/problem/1418/A

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
    Long x, y, k;
    cin >> x >> y >> k;
    Long st = ((k*y) + k);
    Long d = x-1;
    Long ans = st/d;
    bool ok = true;
    for (Long i = ans-1;i < ans+3;i++){
      if (i*d+1 >= st){
        ans = i;
        ok = false;
        break;
      }
    }
    if (ok)ans++;
    ans += k;
    cout << ans << '\n';
  }
  return 0;
}
