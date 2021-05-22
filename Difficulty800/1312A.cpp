/// Problem Name: Two Regular Polygons
/// Problem Link: https://codeforces.com/problemset/problem/1312/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 4e3;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, m;
    cin >> n >> m;
    if (n%m == 0)cout << "YES" << '\n';
    else cout << "NO" << '\n';
  }
  return 0;
}
