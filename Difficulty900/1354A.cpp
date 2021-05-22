/// Problem Name: Alarm Clock
/// Problem Link: https://codeforces.com/problemset/problem/1354/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    Long a, b, c, d;
    cin >> a >> b >> c >> d;
    Long ans = 0;
    if (a <= b)ans = b;
    else if (c <= d)ans = -1;
    else {
      ans = b;
      a -= b;
      ans += ceil(double(a)/double(c-d)) * c;
    }
    cout << ans << '\n';
  }
  return 0;
}
