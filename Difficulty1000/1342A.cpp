/// Problem Name: Road To Zero
/// Problem Link: https://codeforces.com/problemset/problem/1342/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int main()
{
  faster();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    Long x, y;
    cin >> x >> y;
    Long a, b;
    cin >> a >> b;
    Long ans = min(x, y) * b;
    ans += abs(x-y) * a;
    ans = min(ans, (x+y)*a);
    cout << ans << '\n';
  }
  return 0;
}
