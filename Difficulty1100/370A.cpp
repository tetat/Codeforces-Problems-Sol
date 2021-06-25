/// Problem Name: Rook, Bishop and King
/// Problem Link: https://codeforces.com/problemset/problem/370/A

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
  int r1, c1, r2, c2;
  cin >> r1 >> c1 >> r2 >> c2;
  int rock = (r1==r2 || c1==c2)?1:2;
  int bishop = ((r1+c1)%2==(r2+c2)%2)?(abs(r1-r2)==abs(c1-c2)?1:2):0;
  int king = max(abs(r1-r2), abs(c1-c2));
  cout << rock << ' ' << bishop << ' ' << king << '\n';
  return 0;
}
