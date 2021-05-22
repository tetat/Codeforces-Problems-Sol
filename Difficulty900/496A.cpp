/// Problem Name: Minimum Difficulty
/// Problem Link: https://codeforces.com/problemset/problem/496/A

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
  vector <int> v;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  int po = INT_MAX;
  int mx = INT_MAX;
  for (int i = 1;i < n-1;i++){
    int d = v[i+1] - v[i-1];
    if (d < mx){
      mx = d;
      po = i;
    }
  }
  int ans = 0;
  for (int i = 1;i < n;i++){
    if (i == po+1){
      ans = max(ans, v[i] - v[i-2]);
    }
    else if (i != po){
      ans = max(ans, v[i] - v[i-1]);
    }
  }
  cout << ans << '\n';
  return 0;
}
