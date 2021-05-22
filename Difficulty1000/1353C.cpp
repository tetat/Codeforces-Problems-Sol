/// Problem Name: Board Moves
/// Problem Link: https://codeforces.com/problemset/problem/1353/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    Long n;
    cin >> n;
    Long d = n/2;
    Long ans = 0;
    for (Long i = 1, m = 8;i <= d;i++, m += 8){
      ans += (m*i);
    }
    cout << ans << '\n';
  }
  return 0;
}
