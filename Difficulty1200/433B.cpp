/// Problem Name: Kuriyama Mirai's Stones
/// Problem Link: https://codeforces.com/problemset/problem/433/B

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

const int N = 100000;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int t, ca = 0;
  int n, el;
  vector <ll> a;
  vector <ll> b;
  cin >> n;
  a.pb(0);
  b.pb(0);
  for (int i = 0;i < n;i++){
    cin >> el;
    a.pb((ll)(el));
    b.pb((ll)(el));
  }
  sort(all(b));
  for (int i = 1;i <= n;i++){
    a[i] += a[i-1];
    b[i] += b[i-1];
  }
  int q, d, l, r;
  cin >> q;
  while (q--){
    cin >> d >> l >> r;
    if (d==1)cout << (a[r]-a[l-1]) << '\n';
    else cout << (b[r]-b[l-1]) << '\n';
  }
  return 0;
}
