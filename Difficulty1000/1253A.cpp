/// Problem Name: Single Push
/// Problem Link: https://codeforces.com/problemset/problem/1253/A

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

const int N = 500;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int T, ca = 0;
  cin >> T;
  while (T--){
    int n, el;
    vector <int> a;
    vector <int> b;
    cin >> n;
    for (int i = 0;i < n;i++){
      cin >> el;
      a.pb(el);
    }
    for (int i = 0;i < n;i++){
      cin >> el;
      b.pb(el);
    }
    bool ans = true;
    int it = 0;
    int seg = 0;
    int dif;
    while (it < n){
      while (a[it] == b[it] && it < n)it++;
      if (it == n)break;
      seg++;
      dif = b[it] - a[it];
      if (seg > 1 || dif < 0){
        ans = false;
        break;
      }
      bool ok = false;
      while (a[it] != b[it] && it < n){
        if (dif != b[it]-a[it]){
          ok = true;
          break;
        }
        it++;
      }
      if (ok){
        ans = false;
        break;
      }
    }
    if (ans)cout << "YES" << '\n';
    else cout << "NO" << '\n';
  }
  return 0;
}
