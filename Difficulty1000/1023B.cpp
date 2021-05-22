/// Problem Name: Pair of Toys
/// Problem Link: https://codeforces.com/problemset/problem/1023/B

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
  Long n, k;
  cin >> n >> k;
  Long ans = 0;
  if (n+n-1 >= k){
    if (n >= k)ans = (k-1)/2;
    else {
      Long cut = k-n;
      n -= (cut-1);
      ans = n/2;
    }
  }
  //if (k==2 && n==2)ans = 0;
  cout << ans << '\n';
  return 0;
}
