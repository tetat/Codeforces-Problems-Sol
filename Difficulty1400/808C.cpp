/// Problem Name: Tea Party
/// Problem Link: https://codeforces.com/problemset/problem/808/C

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

bool cmp(pair <int, int> &a, pair <int, int> &b){
  return a.second < b.second;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int tc, ca = 0;
  int n, w;
  cin >> n >> w;
  vector <pair <int, int> > a(n), ans(n);
  for (int i = 0;i < n;i++){
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(a.rbegin(), a.rend());
  bool ok = true;
  int ad = 0;
  for (int i = 0;i < n;i++){
    ans[i].first = (a[i].first+1)/2;
    w -= ans[i].first;
    ans[i].second = a[i].second;
    if (w < 0)ok = false;
    //cout << a[i].first << ' ';
  }//cout << '\n';
  if (ok){
    int need = w/n;
    //cout << w << '\n';
    for (int i = 0;i < n;i++){
      int cut = min(a[i].first-ans[i].first, w);
      ans[i].first += cut;
      w -= cut;
    }
    if (w > 0)a[0].first += w;
    sort(ans.begin(), ans.end(), cmp);
    for (int i = 0;i < n;i++){
      cout << ans[i].first << ' ';
    }cout << '\n';
  }else cout << "-1" << '\n';
  return 0;
}
