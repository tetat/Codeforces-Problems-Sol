/// Problem Name: Serval and Bus
/// Problem Link: https://codeforces.com/problemset/problem/1153/A

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
  int n, t;
  cin >> n >> t;
  int s, d;
  int ans = -1;
  int mn = N+10;
  for (int i = 1;i-1 < n;i++){
    cin >> s >> d;
    int cmp = 0;
    for ( ;s+d*cmp < t;cmp++);
    cmp = s+d*cmp;
    if (cmp-t < mn){
      mn = cmp-t;
      ans = i;
    }
  }
  cout << ans << '\n';
  return 0;
}
