/// Problem Name: Pizza, Pizza, Pizza!!!
/// Problem Link: https://codeforces.com/problemset/problem/979/A

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
  Long n, ans = 0;
  cin >> n;
  if (n){
    if (n%2)ans = (n+1)/2;
    else ans = n+1;
  }
  cout << ans << '\n';
  return 0;
}
