/// Problem Name: Treasure Hunt
/// Problem Link: https://codeforces.com/problemset/problem/817/A

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
  int x1, y1;
  int x2, y2;
  int x, y;
  cin >> x1 >> y1 >> x2 >> y2;
  cin >> x >> y;
  int dx = x1-x2;
  int dy = y1-y2;
  if (dx<0)dx = -dx;
  if (dy<0)dy = -dy;
  if (dx%x==0 && dy%y==0 && (dx/x)%2==(dy/y)%2)cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
