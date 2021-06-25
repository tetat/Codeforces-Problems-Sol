/// Problem Name: Appleman and Toastman
/// Problem Link: https://codeforces.com/problemset/problem/461/A

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
  int t, ca = 0;
  int n, el;
  vector <ll> v;
  ll sum = 0;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
    sum += el;
  }
  sort(all(v));
  ll ans = sum;
  for (int i = 0;i+1 < n;i++){
    sum -= v[i];
    ans += v[i];
    ans += sum;
  }
  cout << ans << '\n';
  return 0;
}
