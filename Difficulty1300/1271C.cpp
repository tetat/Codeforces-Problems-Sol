/// Problem Name: Shawarma Tent
/// Problem Link: https://codeforces.com/problemset/problem/1271/C

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

const int N = 200000;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int t, ca = 0;
  int x, y;
  cin >> t >> x >> y;
  int L = 0;
  int R = 0;
  int U = 0;
  int D = 0;
  while (t--){
    int a, b;
    cin >> a >> b;
    if (a > x)R++;
    if (a < x)L++;
    if (b > y)U++;
    if (b < y)D++;
  }
  int mx = max(R, max(L, max(U, D)));
  //cout << R << " " << L << " " << U << " " << D << '\n';
  if (mx == R){
    cout << R << '\n';
    cout << x+1 << " " << y << '\n';
  }
  else if (mx == L){
    cout << L << '\n';
    cout << x-1 << " " << y << '\n';
  }
  else if (mx == U){
    cout << U << '\n';
    cout << x << " " << y+1 << '\n';
  }
  else if (mx == D){
    cout << D << '\n';
    cout << x << " " << y-1 << '\n';
  }
  return 0;
}
