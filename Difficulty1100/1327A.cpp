/// Problem Name: Sum of Odd Integers
/// Problem Link: https://codeforces.com/problemset/problem/1327/A

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
    int n, k;
    cin >> n >> k;
    if (n%2 && k%2==0)cout << "NO" << '\n';
    else if (n%2==0 && k%2)cout << "NO" << '\n';
    else {
      //cout << n << ' ' << int(sqrt(n)) << '\n';
      if (int(sqrt(n)) >= k)cout << "YES" << '\n';
      else cout << "NO" << '\n';
    }
  }
  return 0;
}
