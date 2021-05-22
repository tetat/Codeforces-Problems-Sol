/// Problem Name: Saitama Destroys Hotel
/// Problem Link: https://codeforces.com/problemset/problem/608/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

bool cmp(pair <int, int> &a, pair <int, int> &b){
  return a.first > b.first;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, s, el;
  cin >> n >> s;
  vector <pair <int, int> > v(n);
  for (int i = 0;i < n;i++){
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end(), cmp);
  int ans = 0;
  int cur = s;
  for (int i = 0;i < n;i++){
    ans += cur - v[i].first;
    ans += max(v[i].second-ans, 0);
    cur = v[i].first;
  }
  ans += cur;
  cout << ans << '\n';
  return 0;
}
