/// Problem Name: Johnny and Another Rating Drop
/// Problem Link: https://codeforces.com/problemset/problem/1362/C

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

const int N = 1e4;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    Long n;
    cin >> n;
    Long ans = 0;
    while (n){
      ans += n;
      n /= 2;
    }
    cout << ans << '\n';
  }
  return 0;
}
