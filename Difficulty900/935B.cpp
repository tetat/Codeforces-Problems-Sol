/// Problem Name: Fafa and the Gates
/// Problem Link: https://codeforces.com/problemset/problem/935/B

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
  string s;
  cin >> s;
  vector <pair <int, int> > v;
  int x = 0;
  int y = 0;
  for (int i = 0;i < n;i++){
    if (s[i] == 'U')x++;
    if (s[i] == 'R')y++;
    v.pb(mp(x, y));
  }
  int ans = 0;
  for (int i = 0;i < n;i++){
    if (v[i].first == v[i].second){
      int ff = i-1;
      int ss = i+1;
      if (ss < n){
        if (abs(v[ff].first - v[ss].first) == 2 || abs(v[ff].second - v[ss].second) == 2)ans++;
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
