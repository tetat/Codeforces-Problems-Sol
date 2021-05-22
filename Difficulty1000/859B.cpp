/// Problem Name: Lazy Security Guard
/// Problem Link: https://codeforces.com/problemset/problem/859/B

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
  Long n;
  cin >> n;
  Long low = 0;
  Long high = n;
  Long sq;
  while (low <= high){
    Long mid = low + (high - low)/2;
    if (mid*mid <= n){
      low = mid+1;
      sq = mid;
    }else high = mid-1;
  }
  //cout << sq << '\n';
  Long ans = sq+sq;
  ans += (n/sq)*2;
  if (n%sq)ans += 2;
  cout << ans << '\n';
  return 0;
}
