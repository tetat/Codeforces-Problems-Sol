/// Problem Name: Commentary Boxes
/// Problem Link: https://codeforces.com/problemset/problem/990/A

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
  Long n, m, a, b;
  cin >> n >> m >> a >> b;
  Long down = (n%m);
  Long up = m - down;
  cout << min(up*a, down*b) << '\n';
  return 0;
}
