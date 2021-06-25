/// Problem Name: Gleb And Pizza
/// Problem Link: https://codeforces.com/problemset/problem/842/B

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
  double d, R;
  cin >> d >> R;
  //d -= R;
  int n;
  double x, y, r;
  cin >> n;
  int ans = 0;
  while (n--){
    cin >> x >> y >> r;
    double dx = abs(0-x);
    double dy = abs(0-y);
    double dis = sqrt(dx*dx+dy*dy);
    if (dis+r <= d && dis-r >= d-R)ans++;
  }
  cout << ans << '\n';
  return 0;
}
