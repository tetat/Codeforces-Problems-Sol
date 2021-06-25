/// Problem Name: Valuable Resources
/// Problem Link: https://codeforces.com/problemset/problem/485/B

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
  Long n, a, b;
  cin >> n;
  Long mn_x = INT_MAX;
  Long mx_x = -mn_x;
  Long mn_y = INT_MAX;
  Long mx_y = -mn_y;
  while (n--){
    cin >> a >> b;
    mn_x = min(mn_x, a);
    mx_x = max(mx_x, a);
    mn_y = min(mn_y, b);
    mx_y = max(mx_y, b);
  }
  Long S = max(mx_x-mn_x, mx_y-mn_y);
  cout << S*S << '\n';
  return 0;
}
