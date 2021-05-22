/// Problem Name: Parity Alternated Deletions
/// Problem Link: https://codeforces.com/problemset/problem/1144/B

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
  vector <int> ve;
  vector <int> vo;
  int even = 0;
  int odd = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (el%2){odd++;vo.pb(el);}
    else {even++;ve.pb(el);}
  }
  int ans = 0;
  if (even == odd){
    cout << ans << '\n';
  }
  else {
    sort(all(ve));
    sort(all(vo));
    int len = max(even, odd) - (min(even, odd)+1);
    if (even < odd){
      for (int i = 0;i < len;i++){
        ans += vo[i];
      }
    }
    else {
      for (int i = 0;i < len;i++){
        ans += ve[i];
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
