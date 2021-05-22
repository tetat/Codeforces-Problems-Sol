/// Problem Name: Distance and Axis
/// Problem Link: https://codeforces.com/problemset/problem/1401/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define IO cin.tie(0),cout.tie(0)
#define ISWS ios::sync_with_stdio(0)
typedef long long Long;
void FastIO(){ISWS;IO;}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, k;
    cin >> n >> k;
    if (n <= k)cout << k-n << '\n';
    else {
      if (k%2 != n%2)cout << 1 << '\n';
      else cout << 0 << '\n';
    }
  }
  return 0;
}
