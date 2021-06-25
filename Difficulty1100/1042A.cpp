/// Problem Name: Benches
/// Problem Link: https://codeforces.com/problemset/problem/1042/A

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
  int n, m, el;
  cin >> n >> m;
  int sum = 0;
  int mx = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    sum += el;
    mx = max(mx, el);
  }
  int k = ceil((m+sum) / double(n));
  cout << (max(mx, k)) << ' ' << mx+m << '\n';
  return 0;
}
