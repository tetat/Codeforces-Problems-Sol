/// Problem Name: Sequence with Digits
/// Problem Link: https://codeforces.com/problemset/problem/1355/A

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
    Long n, k;
    cin >> n >> k;
    Long mn = 9;
    Long mx = 0;
    Long ten = 10;
    while (--k && mn){
      Long tm = n;
      mn = 9;
      mx = 0;
      while (tm){
        mn = min(mn, tm%ten);
        mx = max(mx, tm%ten);
        tm /= ten;
      }
      n += mx*mn;
    }
    cout << n << '\n';
  }
  return 0;
}
