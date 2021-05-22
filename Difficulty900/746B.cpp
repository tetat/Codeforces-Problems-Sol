/// Problem Name: Decoding
/// Problem Link: https://codeforces.com/problemset/problem/746/B

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
  int n;
  string s;
  cin >> n >> s;
  if (n==1){
    cout << s << newline;
  }
  else {
    int it = n-2;
    string ans;
    while (it >= 0){
      ans += s[it];
      it -= 2;
    }
    if (it == -1)it = 0;
    else it = 1;
    while (it < n){
      ans += s[it];
      it += 2;
    }
    cout << ans << newline;
  }
  return 0;
}
