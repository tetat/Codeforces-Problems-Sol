/// Problem Name: Roman and Browser
/// Problem Link: https://codeforces.com/problemset/problem/1100/A

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
  int n, k, el;
  int e = 0;
  int s = 0;
  cin >> n >> k;
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
    if (el==1)e++;
    else s++;
  }
  int ans = 0;
  for (int i = 0;i < n;i++){
    int po = e;
    int no = s;
    for (int j = i;j < n;j += k){
      if (v[j] == 1)po--;
      else no--;
    }
    for (int j = i-k;j >= 0;j -= k){
      if (v[j] == 1)po--;
      else no--;
    }
    ans = max(ans, abs(po - no));
  }
  cout << ans << '\n';
  return 0;
}
