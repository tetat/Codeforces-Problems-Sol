/// Problem Name: From Hero to Zero
/// Problem Link: https://codeforces.com/problemset/problem/1175/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    ll n, k, m, ans = 0;
    cin >> n >> k;
    while (n){
      m = n%k;
      ans += m;
      n -= m;
      if (n)ans += 1;
      n /= k;
    }
    cout << ans << '\n';
  }
  return 0;
}
