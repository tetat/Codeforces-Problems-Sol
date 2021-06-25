/// Problem Name: Minimum Product
/// Problem Link: https://codeforces.com/problemset/problem/1409/B

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
    Long a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;

    Long A = a;
    Long B = b;
    Long NN = n;

    Long cut = min(NN, A-x);
    A -= cut;
    NN -= cut;
    cut = min(NN, B-y);
    B -= cut;

    cut = min(n, b-y);
    b -= cut;
    n -= cut;
    cut = min(n, a-x);
    a -= cut;

    Long ans = min(a*b, A*B);
    cout << ans << '\n';
  }
  return 0;
}
