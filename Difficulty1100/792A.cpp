/// Problem Name: New Bus Route
/// Problem Link: https://codeforces.com/problemset/problem/792/A

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
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  sort(v.begin(), v.end());
  int mn = INT_MAX;
  for (int i = 1;i < n;i++){
    mn = min(mn, v[i]-v[i-1]);
  }
  int freq = 0;
  for (int i = 1;i < n;i++){
    if (v[i]-v[i-1] == mn)freq++;
  }
  cout << mn << ' ' << freq << '\n';
  return 0;
}
