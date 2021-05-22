/// Problem Name: Weather Tomorrow
/// Problem Link: https://codeforces.com/problemset/problem/847/M

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  vector <int> v;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  set <int> S;
  set <int>::iterator it;
  for (int i = 1;i < n;i++){
    S.insert(abs(v[i]-v[i-1]));
  }
  if (S.size() > 1)cout << v[n-1] << '\n';
  else {
    it = S.begin();
    int ans = v[n-1] + *it;
    if (ans == v[n-2])ans = v[n-1] - *it;
    cout << ans << '\n';
  }
  return 0;
}
