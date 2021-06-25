/// Problem Name: Maxim Buys an Apartment
/// Problem Link: https://codeforces.com/problemset/problem/854/B

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
  int n, k;
  cin >> n >> k;
  int mn = 0;
  int mx = 0;
  if (k && n!=k){
    mn = 1;
    mx = n-k;
    if  (k+k < mx)mx = k+k;
  }
  cout << mn << ' ' << mx << '\n';
  return 0;
}
