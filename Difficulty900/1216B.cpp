/// Problem Name: Shooting
/// Problem Link: https://codeforces.com/problemset/problem/1216/B

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

bool cmp(pair <II> &a, pair <II> &b){
  return a.first > b.first;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <pair <II> > v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(mp(el, i+1));
  }
  sort(all(v), cmp);
  int ans = 1;
  for (int i = 1;i < n;i++){
    ans += v[i].first*i+1;
  }
  cout << ans << '\n';
  for (int i = 0;i < n;i++){
    cout << v[i].second;
    if (i != n-1)cout << ' ';
  }cout << '\n';
  return 0;
}
