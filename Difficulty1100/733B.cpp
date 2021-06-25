/// Problem Name: Parade
/// Problem Link: https://codeforces.com/problemset/problem/733/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <pair <int, int> > v(n);
  int L = 0;
  int R = 0;
  int d = 0;
  int mx = 0;
  int ans = 0;
  for (int i = 0;i < n;i++){
    cin >> v[i].first >> v[i].second;
    L += v[i].first;
    R += v[i].second;
  }
  d = abs(L-R);
  for (int i = 0;i < n;i++){
    int tm = abs(((L-v[i].first)+v[i].second) - ((R-v[i].second)+v[i].first));
    if (tm > d){
      d = tm;
      ans = i+1;
    }
  }
  cout << ans << '\n';
  return 0;
}
