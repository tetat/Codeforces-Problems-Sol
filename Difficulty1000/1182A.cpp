/// Problem Name: Filling Shapes
/// Problem Link: https://codeforces.com/problemset/problem/1182/A

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
  int n;
  cin >> n;
  if (n%2)cout << "0" << newline;
  else {
    int ans = 1;
    n /= 2;
    while (n--){
      ans = ans << 1;
    }
    cout << ans << newline;
  }
  return 0;
}
