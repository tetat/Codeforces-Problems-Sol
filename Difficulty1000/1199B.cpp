/// Problem Name: Water Lily
/// Problem Link: https://codeforces.com/problemset/problem/1199/B

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

const int N = 6000;

int main()
{
  faster()
  int t, ca = 0;
  double h, l;
  cin >> h >> l;
  double ans = (l*l - h*h) / (h+h);
  set_fraction(6);
  cout << ans << newline;
  return 0;
}
