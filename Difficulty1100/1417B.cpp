/// Problem Name: Two Arrays
/// Problem Link: https://codeforces.com/problemset/problem/1417/B

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, T;
    cin >> n >> T;
    vector <pair <int, int> > a(n);
    for (int i = 0;i < n;i++){
      cin >> a[i].first;
      a[i].second = i;
    }
    if (n==1){
      cout << "1" << '\n';
      continue;
    }
    int L = 0;
    int R = n-1;
    sort(a.begin(), a.end());
    vector <int> white, black;
    if (T%2){
      int d = T/2;
      for (int i = 0;i < n;i++){
        if (a[i].first <= d)white.pb(a[i].second);
        else black.pb(a[i].second);
      }
    }else {
      int d = T/2;
      vector <int> mid;
      for (int i = 0;i < n;i++){
        if (a[i].first < d)white.pb(a[i].second);
        else if (a[i].first > d)black.pb(a[i].second);
        else mid.pb(a[i].second);
      }
      d = mid.size();
      d /= 2;
      for (int i = 0;i < d;i++){
        white.pb(mid[i]);
      }
      for (int i = d;i < mid.size();i++){
        black.pb(mid[i]);
      }
    }
    vector <int> ans(n);
    for (int i = 0;i < white.size();i++){
      ans[white[i]] = 0;
    }
    for (int i = 0;i < black.size();i++){
      ans[black[i]] = 1;
    }
    for (int i = 0;i < n;i++){
      cout << ans[i] << ' ';
    }cout << '\n';
  }
  return 0;
}
