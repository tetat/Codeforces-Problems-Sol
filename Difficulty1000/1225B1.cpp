/// Problem Name: TV Subscriptions (Easy Version)
/// Problem Link: https://codeforces.com/problemset/problem/1225/B1

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
#define stp setprecision
#define set_pnt(pnt) cout<<fixed<<stp(pnt);
const double pi = acos(-1.0);

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, k, d, el;
    cin >> n >> k >> d;
    vector <int> v;
    vector <int> mark(k+1, 0);
    for (int i = 0;i < n;i++){
      cin >> el;
      v.pb(el);
      //mark[el]++;
    }
    int L = 0;
    int R = d-1;
    int ans = INT_MAX;
    int cnt = 0;
    for (int i = L;i <= R;i++){
      if (mark[v[i]] == 0)cnt++;
      mark[v[i]]++;
    }
    ans = min(ans, cnt);
    R++;
    while (R < n){
      mark[v[L]]--;
      if (mark[v[L]] == 0)cnt--;
      if (mark[v[R]] == 0)cnt++;
      mark[v[R]]++;
      ans = min(ans, cnt);
      L++;
      R++;
    }
    cout << ans << '\n';
  }
  return 0;
}
