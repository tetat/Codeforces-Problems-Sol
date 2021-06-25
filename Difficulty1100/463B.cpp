/// Problem Name: Caisa and Pylons
/// Problem Link: https://codeforces.com/problemset/problem/463/B

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

const int N = 100000;

int main()
{
  faster()
  int t, ca = 0;
  int n, el;
  cin >> n;
  int ans = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    ans = max(ans, el);
  }
  cout << ans << newline;
  return 0;
}
