/// Problem Name: Dominated Subarray
/// Problem Link: https://codeforces.com/problemset/problem/1257/C

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

const int N = 200000;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int t, ca = 0;
  cin >> t;
  while (t--){
    int n, el;
    cin >> n;
    vector <int> p(n+1, 0);
    vector <int> mark(n+1, 0);
    int ans = INT_MAX;
    for (int i = 0;i < n;i++){
      cin >> el;
      if (mark[el] == 0){
        mark[el] = 1;
        p[el] = i+1;
      }
      else {
        ans = min(ans, ((i+1)-p[el])+1);
        p[el] = i+1;
      }
    }
    if (ans == INT_MAX)ans = -1;
    cout << ans << '\n';
  }
  return 0;
}
