/// Problem Name: Elections
/// Problem Link: https://codeforces.com/problemset/problem/570/A

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

const int N = 500;

int main()
{
  faster()
  int t, ca = 0;
  int n, m;
  cin >> n >> m;
  VE <int> can(n+5, 0);
  for (int i = 0;i < m;i++){
    int mx = -1;
    int el, idx;
    for (int j = 0;j < n;j++){
      cin >> el;
      if (el > mx){
        mx = el;
        idx = j+1;
      }
    }
    can[idx]++;
  }
  int ans = -1;
  int mx = 0;
  for (int i = 1;i <= n;i++){
    if (mx < can[i]){
      mx = can[i];
      ans = i;
    }
  }
  cout << ans << newline;
  return 0;
}
