/// Problem Name: Simple Polygon Embedding
/// Problem Link: https://codeforces.com/problemset/problem/1354/C1

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

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    double n;
    cin >> n;
    //cout << acos(-1.0) << '\n';
    double ans = 1.0 / tan(acos(-1.0)/(n+n));
    cout << fixed << setprecision(6);
    cout << ans << '\n';
  }
  return 0;
}
