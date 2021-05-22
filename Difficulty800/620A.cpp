/// Problem Name: Professor GukiZ's Robot
/// Problem Link: https://codeforces.com/problemset/problem/620/A

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
  int x1, x2, y1, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int dx = abs(x1-x2);
  int dy = abs(y1-y2);
  cout << (max(dx, dy)) << '\n';
  return 0;
}
