/// Problem Name: Ropewalkers
/// Problem Link: https://codeforces.com/problemset/problem/1185/A

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
  int ar[3];
  int d, ans = 0;
  cin >> ar[0] >> ar[1] >> ar[2] >> d;
  sort(ar, ar+3);
  if (ar[1]+d > ar[2]){
    ans += (ar[1]+d) - ar[2];
  }
  if (ar[1]-d < ar[0]){
    ans += ar[0] - (ar[1]-d);
  }
  cout << ans << '\n';
  return 0;
}
