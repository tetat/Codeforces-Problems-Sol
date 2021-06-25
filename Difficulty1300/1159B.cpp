/// Problem Name: Expansion coefficient of the array
/// Problem Link: https://codeforces.com/problemset/problem/1159/B

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
  Long n, el;
  cin >> n;
  vector <Long> v;
  Long ans = LLONG_MAX;
  for (Long i = 0;i < n;i++){
    cin >> el;
    Long d = max(i, n-(i+1));
    ans = min(ans, el/d);
  }
  cout << ans << '\n';
  return 0;
}
