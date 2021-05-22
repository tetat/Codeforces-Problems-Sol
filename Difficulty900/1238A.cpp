/// Problem Name: Prime Subtraction
/// Problem Link: https://codeforces.com/problemset/problem/1238/A

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
  cin >> t;
  while (t--){
    LL x, y;
    cin >> x >> y;
    if (x-y > 1 || x==y)cout << "yes" << newline;
    else cout << "no" << newline;
  }
  return 0;
}
