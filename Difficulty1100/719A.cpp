/// Problem Name: Vitya in the Countryside
/// Problem Link: https://codeforces.com/problemset/problem/719/A

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

const int N = 50;

int main()
{
  faster()
  int t, ca = 0;
  int n, el;
  cin >> n;
  VE <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  string ans;
  if (n == 1){
    if (v[0]==15)ans = "DOWN";
    else if (v[0]==0)ans = "UP";
    else ans = "-1";
  }
  else {
    if (v[n-1] == 15)ans = "DOWN";
    else if (v[n-1] == 0)ans = "UP";
    else {
      if (v[n-2] < v[n-1])ans = "UP";
      else ans = "DOWN";
    }
  }
  cout << ans << newline;
  return 0;
}
