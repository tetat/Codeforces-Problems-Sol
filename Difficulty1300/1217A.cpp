/// Problem Name: Creating a Character
/// Problem Link: https://codeforces.com/problemset/problem/1217/A

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
  cin >> tc;
  while (tc--){
    int n, m, k;
    cin >> n >> m >> k;
    n += k;
    int d = n-m;
    if (d < 0)d = 0;
    cout << (min(int(ceil(d/2.0)), k+1)) << '\n';
  }
  return 0;
}
