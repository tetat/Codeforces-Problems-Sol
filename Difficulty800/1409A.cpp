/// Problem Name: Yet Another Two Integers Problem
/// Problem Link: https://codeforces.com/problemset/problem/1409/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define IO cin.tie(0),cout.tie(0)
#define ISWS ios::sync_with_stdio(0)
typedef long long Long;
void FastIO(){ISWS;IO;}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if (a < b){
      for (int i = 10;i > 0;i--){
        ans += (b-a)/i;
        a += ((b-a)/i) * i;
      }
    }else {
      for (int i = 10;i > 0;i--){
        ans += (a-b)/i;
        a -= ((a-b)/i) * i;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
