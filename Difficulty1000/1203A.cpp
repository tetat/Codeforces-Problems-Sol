/// Problem Name: Circle of Students
/// Problem Link: https://codeforces.com/problemset/problem/1203/A

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
  cin >> t;
  while (t--){
    int n, el;
    VE <int> v;
    cin >> n;
    for (int i = 0;i < n;i++){
      cin >> el;
      v.pb(el);
    }
    if (n==1)cout << "YES" << newline;
    else {
      bool ans = false;
      bool ok = true;
      el = v[0];
      for (int i = 0;i < n;i++){
        if (el != v[i]){
          ok = false;
          break;
        }
        el++;
        if (el > n)el = 1;
      }
      if (ok)ans = true;
      ok = true;
      el = v[0];
      for (int i = 0;i < n;i++){
        if (el != v[i]){
          ok = false;
          break;
        }
        el--;
        if (el < 1)el = n;
      }
      if (ok)ans = true;
      if (ans)cout << "YES" << newline;
      else cout << "NO" << newline;
    }
  }
  return 0;
}
