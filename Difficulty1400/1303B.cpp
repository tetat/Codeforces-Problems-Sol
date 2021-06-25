/// Problem Name: National Project
/// Problem Link: https://codeforces.com/problemset/problem/1303/B

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
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    ll n, g, b;
    cin >> n >> g >> b;
    ll good = (n+1)/2;
    ll days = (good/g) * (g+b);
    days += good%g?good%g:-b;
    cout << max(n, days) << '\n';
  }
  return 0;
}
