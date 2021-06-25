/// Problem Name: Array Splitting
/// Problem Link: https://codeforces.com/problemset/problem/1197/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, k;
  cin >> n >> k;
  vector <int> v(n);
  for (int i = 0;i < n;i++){
    cin >> v[i];
  }
  if (n==k){
    cout << "0" << '\n';
    return 0;
  }
  if (k==1){
    cout << v[n-1]-v[0] << '\n';
    return 0;
  }
  vector <pair <int, int> > d;
  for (int i = 1;i < n;i++){
    d.pb(mp(v[i]-v[i-1], i-1));
  }
  k--;
  sort(d.begin(), d.end());
  d.erase(d.begin(), d.begin()+(n-k)-1);
//  for (int i = 0;i < d.size();i++){
//    cout << d[i].first << ' ' << d[i].second << '\n';
//  }
  vector <int> p;
  for (int i = 0;i < d.size();i++){
    p.pb(d[i].second);
  }
  sort(p.begin(), p.end());
  int ans = 0;
  int mn = INT_MAX;
  int mx = 0;
  for (int i = 0, j = 0;i < n;i++){
    mn = min(mn, v[i]);
    mx = max(mx, v[i]);
    if (p[j] == i || i == n-1){
      ans += mx-mn;
      mn = INT_MAX;
      mx = 0;
      j++;
    }
  }
  cout << ans << '\n';
  return 0;
}
