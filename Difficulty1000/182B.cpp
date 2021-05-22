/// Problem Name: Vasya's Calendar
/// Problem Link: https://codeforces.com/problemset/problem/182/B

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
  int d, n, el;
  cin >> d >> n;
  int ans = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (i != n-1)ans += d-el;
  }
  cout << ans << '\n';
  return 0;
}
