/// Problem Name: HDD is Outdated Technology
/// Problem Link: https://codeforces.com/problemset/problem/612/B

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
  cin >> n;
  vector <pair <int, int> > v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(mp(el, i+1));
  }
  sort(v.begin(), v.end());
  Long ans = 0;
  for (int i = 1;i < n;i++){
    ans += abs(v[i].second-v[i-1].second);
  }
  cout << ans << '\n';
  return 0;
}
