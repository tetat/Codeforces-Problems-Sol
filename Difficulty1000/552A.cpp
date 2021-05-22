/// Problem Name: Vanya and Table
/// Problem Link: https://codeforces.com/problemset/problem/552/A

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
  int ans = 0;
  int x1, y1, x2, y2;
  for (int i = 0;i < n;i++){
    cin >> x1 >> y1 >> x2 >> y2;
    ans += ((x2-(x1-1)) * (y2-(y1-1)));
  }
  cout << ans << '\n';
  return 0;
}
