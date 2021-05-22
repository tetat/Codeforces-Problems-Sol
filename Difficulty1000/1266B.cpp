/// Problem Name: Dice Tower
/// Problem Link: https://codeforces.com/problemset/problem/1266/B

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
  cin >> t;
  while (t--){
    ll n, d = 14;
    ll one = 1;
    ll two = 2;
    ll three = 3;
    ll four = 4;
    ll five = 5;
    ll six = 6;
    cin >> n;
    if (n < 15)cout << "NO" << '\n';
    else {
      n = n%d;
      if (n==one || n==two || n==three || n==four || n==five || n==six)cout << "YES" << '\n';
      else cout << "NO" << '\n';
    }
  }
  return 0;
}
