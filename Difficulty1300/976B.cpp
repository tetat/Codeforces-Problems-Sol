/// Problem Name: Lara Croft and the New Game
/// Problem Link: https://codeforces.com/problemset/problem/976/B

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
  Long n, m, k;
  cin >> n >> m >> k;
  Long x, y;
  if (n > k){
    x = k+1;
    y = 1;
  }else {
    k -= (n-1);
    x = k/(m-1);
    y = k%(m-1);
    if (y)x++;
    x = n-x;
    x++;
    if (x%2==0){
      if (y==0)y = m;
      else y++;
    }else {
      if (y==0)y = m-2;
      else y--;
      y = m-y;
    }
  }
  cout << x << ' ' << y << '\n';
  return 0;
}
