/// Problem Name: Data Center
/// Problem Link: https://codeforces.com/problemset/problem/1250/F

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

const int N = 500;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  ll n, ans = 1e18;
  cin >> n;
  for (ll i = 1;i*i <= n;i++){
    if (n%i == 0){
      ans = min(ans, n/i*2 + i+i);
    }
  }
  cout << ans << '\n';
  return 0;
}
