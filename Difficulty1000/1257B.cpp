/// Problem Name: Magic Stick
/// Problem Link: https://codeforces.com/problemset/problem/1257/B

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
    ll x, y;
    cin >> x >> y;
    if (x >= y)cout << "yes" << '\n';
    else {
      map <ll, int> m;
      while (x < y){
        if (m[x] > 0)break;
        m[x]++;
        if (x%2)x--;
        x = (x*3)/2;
      }
      if (x < y)cout << "no" << '\n';
      else cout << "yes" << '\n';
    }
  }
  return 0;
}
