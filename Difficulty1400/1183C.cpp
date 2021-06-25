/// Problem Name: Computer Game
/// Problem Link: https://codeforces.com/problemset/problem/1183/C

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

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    Long k, n, a, b;
    cin >> k >> n >> a >> b;
    Long ans = -1;
    if ((k-1)/b >= n){
      Long L = 0;
      Long R = n;
      Long two = 2;
      while (L <= R){
        Long m = L + (R-L)/two;
        Long tm = (m*a)+((n-m)*b);
        if (tm < k){
          ans = m;
          L = m+1;
        }else R = m-1;
      }
    }
    //if (ans > n)ans = n;
    cout << ans << '\n';
  }
  return 0;
}
