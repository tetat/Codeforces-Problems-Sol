/// Problem Name: Restricted RPS
/// Problem Link: https://codeforces.com/problemset/problem/1245/B

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

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    string s;
    cin >> s;
    string ans = s;
    int cnt = 0;
    for (int i = 0;i < n && a;i++){
      if (s[i] == 'S'){
        ans[i] = 'R';
        a--;cnt++;
      }
    }
    for (int i = 0;i < n && b;i++){
      if (s[i] == 'R'){
        ans[i] = 'P';
        b--;cnt++;
      }
    }
    for (int i = 0;i < n && c;i++){
      if (s[i] == 'P'){
        ans[i] = 'S';
        c--;cnt++;
      }
    }
    int d = n%2?(n/2)+1:n/2;
    if (d <= cnt){
      int idx = 0;
      while (idx < n && a){
        if (s[idx] == ans[idx]){
          ans[idx] = 'R';
          a--;
        }idx++;
      }
      while (idx < n && b){
        if (s[idx] == ans[idx]){
          ans[idx] = 'P';
          b--;
        }idx++;
      }
      while (idx < n && c){
        if (s[idx] == ans[idx]){
          ans[idx] = 'S';
          c--;
        }idx++;
      }
      cout << "YES" << '\n';
      cout << ans << '\n';
    }else cout << "NO" << '\n';
  }
  return 0;
}
