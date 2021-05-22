/// Problem Name: Little Elephant and Rozdil
/// Problem Link: https://codeforces.com/problemset/problem/205/A

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
  int n, el;
  vector <pair <int, int> > v;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(mp(el, i+1));
  }
  sort(v.begin(), v.end());
  v.pb(mp(0, 0));
  if (v[0].first == v[1].first)cout << "Still Rozdil" << '\n';
  else cout << v[0].second << '\n';
  return 0;
}
