/// Problem Name: Dishonest Sellers
/// Problem Link: https://codeforces.com/problemset/problem/779/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;

bool cmp(pair <int, int> &a, pair <int, int> &b){
  return a.first-a.second < b.first-b.second;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, k, el;
  cin >> n >> k;
  vector <pair <int, int> > v(n);
  for (int i = 0;i < n;i++){
    cin >> v[i].first;
  }
  for (int i = 0;i < n;i++){
    cin >> v[i].second;
  }
  sort(v.begin(), v.end(), cmp);
  int ans = 0;
  for (int i = 0;i < n;i++){
    if (i < k || v[i].first-v[i].second < 0)ans += v[i].first;
    else ans += v[i].second;
    //cout << v[i].first << ' ' << v[i].second << '\n';
  }
  cout << ans << '\n';
  return 0;
}
