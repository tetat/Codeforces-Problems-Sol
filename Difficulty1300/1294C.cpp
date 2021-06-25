/// Problem Name: Product of Three Numbers
/// Problem Link: https://codeforces.com/problemset/problem/1294/C

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space ' '
#define PQ priority_queue
#define VE vector
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(X) X.begin(), X.end()
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define set_fraction(pnt) cout << fixed << setprecision(pnt);
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);

const int N = 200000;

int main()
{
  faster()
  int t, ca = 0;
  cin >> t;
  while (t--){
    ll n;
    cin >> n;
    bool ok = false;
    VE <ll> ans;
    for (ll i = 2;i*i <= n;i++){
      if (n%i == 0){
        if (i*i != n){
          ll ff = i;
          ll ss = n/i;
          for (ll j = 2;j*j <= ff;j++){
            if (ff%j == 0){
              if (j*j != ff && ss != j && ss != (ff/j)){
                ans.pb(j);
                ans.pb(ff/j);
                ans.pb(ss);
                ok = true;
                break;
              }
            }
          }
          if (ok)break;
          for (ll j = 2;j*j <= ss;j++){
            if (ss%j == 0){
              if (j*j != ss && ff != j && ff != (ss/j)){
                ans.pb(j);
                ans.pb(ss/j);
                ans.pb(ff);
                ok = true;
                break;
              }
            }
          }
          if (ok)break;
        }
      }
    }
    if (ans.size() == 3){
      cout << "YES" << newline;
      cout << ans[0] << space << ans[1] << space << ans[2] << newline;
    }
    else cout << "NO" << newline;
  }
  return 0;
}
