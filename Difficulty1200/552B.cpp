/// Problem Name: Vanya and Books
/// Problem Link: https://codeforces.com/problemset/problem/552/B

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
  int t, ca = 0;
  vector <ll> d;
  ll in = 0;
  for (int i = 0;i <= 9;i++){
    d.pb(in);
    in = (in*10)+9;
  }
  ll n;
  cin >> n;
  ll tmp = n;
  ll l = 0;
  while (tmp){
    tmp /= 10;
    l++;
  }
  ll ans = 0;
  while (n){
    tmp = l;
    l--;
    ans += (n-d[l])*tmp;
    n = d[l];
  }
  cout << ans << '\n';
  return 0;
}
