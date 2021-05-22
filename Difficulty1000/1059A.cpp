/// Problem Name: Cashier
/// Problem Link: https://codeforces.com/problemset/problem/1059/A

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
  ll n, L, a;
  cin >> n >> L >> a;
  ll prev = 0;
  ll t, l;
  ll ans = 0;
  vector <pair <ll, ll> > v;
  for (int i = 0;i < n;i++){
    cin >> t >> l;
    v.pb(mp(t, l));
  }
  //sort(all(v));
  for (int i = 0;i < n;i++){
    if (v[i].first - prev >= a){
      ans += (v[i].first-prev) / a;
    }
    prev = v[i].first + v[i].second;
  }
  L -= prev;
  ans += L/a;
  cout << ans << '\n';
  return 0;
}
