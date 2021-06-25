/// Problem Name: Packets
/// Problem Link: https://codeforces.com/problemset/problem/1037/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  Long n;
  cin >> n;
  Long p = 1;
  int ans = 0;
  while (p <= n){
    p += p;
    ans++;
  }
  cout << ans << '\n';
  return 0;
}
