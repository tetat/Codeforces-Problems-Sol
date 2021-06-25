/// Problem Name: Covered Path
/// Problem Link: https://codeforces.com/problemset/problem/534/B

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
  int v1, v2;
  cin >> v1 >> v2;
  int t, d;
  cin >> t >> d;
  int ans = 0;
  int cur = v1-d;
  while (t--){
    int tm = d*t + v2;
    ans += min(cur+d, tm);
    cur = min(cur+d, tm);
    //cout << cur << '\n';
  }
  cout << ans << '\n';
  return 0;
}
