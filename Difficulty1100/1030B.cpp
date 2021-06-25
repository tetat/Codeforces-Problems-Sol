/// Problem Name: Vasya and Cornfield
/// Problem Link: https://codeforces.com/problemset/problem/1030/B

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
  int n, d;
  cin >> n >> d;
  int q, x, y;
  cin >> q;
  while (q--){
    cin >> x >> y;
    int up = x+d;
    if (up>n)up = n - (up-n);
    int down = abs(x-d);
    if (y<=up && y>=down)cout << "YES" << '\n';
    else cout << "NO" << '\n';
  }
  return 0;
}
