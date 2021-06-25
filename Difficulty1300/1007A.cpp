/// Problem Name: Reorder the Array
/// Problem Link: https://codeforces.com/problemset/problem/1007/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;

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
  sort(v.begin(), v.end(), greater<int>());
  int ans = 0;
  int L = 0;
  int R = 0;
  while (R < n){
    while (R < n && v[L]==v[R])R++;
    if (R < n){
      ans++;
      L++;
      R++;
    }
  }
  cout << ans << '\n';
  return 0;
}
