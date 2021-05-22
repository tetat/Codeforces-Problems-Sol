/// Problem Name: Gifts Fixing
/// Problem Link: https://codeforces.com/problemset/problem/1399/B

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
    int n;
    cin >> n;
    vector <int> a(n);
    int mn_a = INT_MAX;
    for (int i = 0;i < n;i++){
      cin >> a[i];
      mn_a = min(mn_a, a[i]);
    }
    vector <int> b(n);
    int mn_b = INT_MAX;
    for (int i = 0;i < n;i++){
      cin >> b[i];
      mn_b = min(mn_b, b[i]);
    }
    Long ans = 0;
    for (int i = 0;i < n;i++){
      ans += max(a[i]-mn_a, b[i]-mn_b);
    }
    cout << ans << '\n';
  }
  return 0;
}
