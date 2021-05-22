/// Problem Name: Divisibility Problem
/// Problem Link: https://codeforces.com/problemset/problem/1328/A

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
  cin >> tc;
  while (tc--){
    Long a, b;
    cin >> a >> b;
    Long d = ceil(a/double(b));
    cout << (d*b)-a << '\n';
  }
  return 0;
}
