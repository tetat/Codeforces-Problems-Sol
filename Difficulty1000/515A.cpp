/// Problem Name: Drazil and Date
/// Problem Link: https://codeforces.com/problemset/problem/515/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space ' '
#define PQ priority_queue
#define VE vector
#define LL long long
#define ULL unsigned long long
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

const int N = 100;

int main()
{
  faster()
  int t, ca = 0;
  int a, b, s;
  cin >> a >> b >> s;
  a = abs(a);
  b = abs(b);
  if (((a+b)%2 && s%2 && (a+b)<=s) || ((a+b)%2==0 && s%2==0 && (a+b)<=s))cout << "YES" << newline;
  else cout << "NO" << newline;
  return 0;
}
