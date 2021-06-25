/// Problem Name: Obtain Two Zeroes
/// Problem Link: https://codeforces.com/problemset/problem/1260/B

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

const int N = 10000;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int t, ca = 0;
  cin >> t;
  while (t--){
    ll a, b;
    cin >> a >> b;
    bool ans = false;
    ll x = 1;
    if (a > b)swap(a, b);
    if (a+a == b)ans = true;
    else if (a+a > b){
      ll L = 1;
      ll R = a;
      while (L <= R){
        ll m = (L+R)/2;
        ll da = a-(m+m);
        ll db = b-m;
        if (da+da < db)R = m-1;
        else if (da+da > db)L = m+1;
        else {
          ans = true;
          break;
        }
      }
    }
    else if (a+a < b){
      ll L = 1;
      ll R = a;
      while (L <= R){
        ll m = (L+R)/2;
        ll da = a-m;
        ll db = b-(m+m);
        if (da+da < db)R = m-1;
        else if (da+da > db)L = m+1;
        else {
          ans = true;
          break;
        }
      }
    }
    if (!ans)cout << "no" << '\n';
    else cout << "yes" << '\n';
  }
  return 0;
}
