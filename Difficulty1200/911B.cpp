/// Problem Name: Two Cakes
/// Problem Link: https://codeforces.com/problemset/problem/911/B

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define Long long long
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, a, b;
  cin >> n >> a >> b;
  int mx = 0;
  for (int i = 1, j = n-1;i < n;i++, j--){
    if (a/i && b/j){
      mx = max(mx, min(a/i, b/j));
    }
  }
  cout << mx << '\n';
  return 0;
}
