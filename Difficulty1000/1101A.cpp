/// Problem Name: Minimum Integer
/// Problem Link: https://codeforces.com/problemset/problem/1101/A

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
  cin >> tc;
  while (tc--){
    int l, r, d;
    cin >> l >> r >> d;
    if (d < l)cout << d << '\n';
    else {
      int div = ceil(double(r)/double(d));
      if (d*div==r)div++;
      cout << d*div << '\n';
    }
  }
  return 0;
}
