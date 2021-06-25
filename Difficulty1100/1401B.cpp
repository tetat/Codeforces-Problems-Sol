/// Problem Name: Ternary Sequence
/// Problem Link: https://codeforces.com/problemset/problem/1401/B

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
    vector <Long> a(3);
    cin >> a[0] >> a[1] >> a[2];
    vector <Long> b(3);
    cin >> b[0] >> b[1] >> b[2];
    Long cut = min(a[2], b[1]);
    a[2] -= cut;
    b[1] -= cut;
    Long ans = cut+cut;
    cut = min(b[2], a[0]);
    b[2] -= cut;
    cut = min(b[2], a[2]);
    b[2] -= cut;
    cut = min(a[1], b[2]);
    ans -= cut+cut;
    cout << ans << '\n';
  }
  return 0;
}
