/// Problem Name: Cow and Haybales
/// Problem Link: https://codeforces.com/problemset/problem/1307/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define Long long long
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, d, el;
    cin >> n >> d;
    vector <int> v;
    for (int i = 0;i < n;i++){
      cin >> el;
      v.pb(el);
    }
    for (int i = 1;i < n && d;i++){
      while (v[i] && d-i>=0){
        v[0]++;
        v[i]--;
        d -= i;
      }
    }
    cout << v[0] << '\n';
  }
  return 0;
}
