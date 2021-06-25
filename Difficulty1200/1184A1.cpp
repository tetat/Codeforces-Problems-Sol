/// Problem Name: Heidi Learns Hashing (Easy)
/// Problem Link: https://codeforces.com/problemset/problem/1184/A1

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e4;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  Long r;
  cin >> r;
  if (r%2==0 || r<5)cout << "NO" << '\n';
  else cout << 1 << ' ' << Long((r-3)/2) << '\n';
  return 0;
}
