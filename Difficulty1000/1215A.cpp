/// Problem Name: Yellow Cards
/// Problem Link: https://codeforces.com/problemset/problem/1215/A

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
  int tc, ca = 0;
  int a1, a2, k1, k2, n;
  cin >> a1 >> a2 >> k1 >> k2 >> n;
  int y = n;
  y = y - (k1-1)*a1;
  y = y - (k2-1)*a2;
  if (y<0)y = 0;
  int mn = min(y, (a1+a2));
  int mx = 0;
  if (k1 < k2){
    while (a1 && n>=0){
      a1--;
      n -= k1;
      if (n>=0)mx++;
    }
    while (a2 && n>=0){
      a2--;
      n -= k2;
      if (n>=0)mx++;
    }
  }
  else {
    while (a2 && n>=0){
      a2--;
      n -= k2;
      if (n>=0)mx++;
    }
    while (a1 && n>=0){
      a1--;
      n -= k1;
      if (n>=0)mx++;
    }
  }
  cout << mn << ' ' << mx << '\n';
  return 0;
}
