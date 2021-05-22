/// Problem Name: Required Remainder
/// Problem Link: https://codeforces.com/problemset/problem/1374/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    Long x, y, n;
    cin >> x >> y >> n;
    Long d = n/x;
    Long k = (d*x)+y;
    if (k > n)k -= x;
    cout << k << '\n';
  }
  return 0;
}
