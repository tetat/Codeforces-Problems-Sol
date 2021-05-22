/// Problem Name: The Fair Nut and Elevator
/// Problem Link: https://codeforces.com/problemset/problem/1084/A

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
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  int ans = INT_MAX;
  for (int i = 0;i < n;i++){
    int cnt = 0;
    for (int j = 0;j < n;j++){
      cnt += v[j] * abs(i-j);
      cnt += v[j] * j;
      cnt += v[j] * i;
    }
    //cout << cnt << ' ';
    ans = min(ans, cnt);
  }
  cout << ans+ans << '\n';
  return 0;
}
