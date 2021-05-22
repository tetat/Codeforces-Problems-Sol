/// Problem Name: Contest
/// Problem Link: https://codeforces.com/problemset/problem/501/A

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

const int N = 10000;

int main()
{
  faster()
  int t, ca = 0;
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int m = max((3*a)/10, a - (a/250*c));
  int v = max((3*b)/10, b - (b/250*d));
  if (m > v)cout << "Misha" << newline;
  else if (m < v)cout << "Vasya" << newline;
  else cout << "Tie" << newline;
  return 0;
}
