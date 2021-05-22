/// Problem Name: Detective Book
/// Problem Link: https://codeforces.com/problemset/problem/1140/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> v;
  v.pb(0);
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  int i = 1;
  int ans = 0;
  while (i <= n){
    int mx = v[i];
    while (i <= mx && i <= n){
      mx = max(mx, v[i]);
      i++;
    }
    ans++;
  }
  cout << ans << '\n';
  return 0;
}
