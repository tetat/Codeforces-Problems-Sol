/// Problem Name: Playing with Paper
/// Problem Link: https://codeforces.com/problemset/problem/527/A

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
  ll a, b;
  ll ans = 0;
  cin >> a >> b;
  while (a && b){
    ans += a/b;
    a -= (a/b)*b;
    if (a < b)swap(a, b);
  }
  cout << ans << '\n';
  return 0;
}
