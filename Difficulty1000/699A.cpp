/// Problem Name: Launch of Collider
/// Problem Link: https://codeforces.com/problemset/problem/699/A

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
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  int d = INT_MAX;
  for (int i = 0;i+1 < n;i++){
    if (s[i]=='R' && s[i+1]=='L'){
      d = min(d, v[i+1]-v[i]);
    }
  }
  if (d == INT_MAX)cout << "-1" << '\n';
  else cout << (d/2) << '\n';
  return 0;
}
