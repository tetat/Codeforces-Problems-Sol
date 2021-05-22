/// Problem Name: Divide it!
/// Problem Link: https://codeforces.com/problemset/problem/1176/A

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
    LL n, ans = 0;
    cin >> n;
    while (n!=1 && (n%2==0 || n%3==0 || n%5==0)){
      if (n%2==0){
        n /= 2;
        ans++;
      }
      if (n%3==0){
        n = (n*2)/3;
        ans++;
      }
      if (n%5==0){
        n = (n*4)/5;
        ans++;
      }
    }
    if (n > 1)cout << "-1" << newline;
    else cout << ans << newline;
  }
  return 0;
}
