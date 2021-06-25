/// Problem Name: Feed the cat
/// Problem Link: https://codeforces.com/problemset/problem/955/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int hh, mm;
  cin >> hh >> mm;
  double h, d, c, n;
  cin >> h >> d >> c >> n;
  double ans1 = 0;
  double ans2 = 0;
  double red = ceil(h/n);
  ans1 += red*c;
  c = c - (20*c)/100;
  double tf = 60*24;
  double tz = 60*20;
  if (hh*60 + mm < tz){
    h += d*(tz - (hh* 60 + mm));
  }
  red = ceil(h/n);
  ans2 += red*c;
  //cout << "red " << red << '\n';
  //cout << h << ' ' << c <<  '\n';
  cout << fixed << setprecision(4);
  //cout << ans1 << ' ' << ans2 << '\n';
  cout << min(ans1, ans2) << '\n';
  return 0;
}
