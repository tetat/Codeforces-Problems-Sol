/// Problem Name: Changing Volume
/// Problem Link: https://codeforces.com/problemset/problem/1255/A

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
    int a, b;
    cin >> a >> b;
    if (a<b)swap(a, b);
    int d = a-b;
    int ans = 0;
    ans += d/5;
    d = d%5;
    ans += d/2;
    d = d%2;
    ans += d;
    cout << ans << '\n';
  }
  return 0;
}
