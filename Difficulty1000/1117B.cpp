/// Problem Name: Emotes
/// Problem Link: https://codeforces.com/problemset/problem/1117/B

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
  ll n, m, k, el;
  cin >> n >> m >> k;
  vector <ll> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  sort(all(v), greater<ll>());
//  for (int i = 0;i < n;i++){
//    cout << v[i];
//    if (i != n-1)cout << ' ';
//  }cout << '\n';
  ll ans = 0;
  ll d = m/(k+1);
  if (d==0 && k!=m)d++;
  ans += v[1] * d;
  m -= d;
  ans += v[0] * m;
  cout << ans << '\n';
  return 0;
}
