/// Problem Name: New Year's Eve
/// Problem Link: https://codeforces.com/problemset/problem/912/B

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
  Long n, k;
  cin >> n >> k;
  Long tm = n;
  Long d = 0;
  Long one = 0;
  Long on = 1;
  while (tm){
    one += (tm&on);
    tm >>= on;
    d++;
  }
  if (k > 1){
    for (Long i = 0;i < d;i++){
      if ((n & (on<<i)) == 0){
        n ^= (on<<i);
      }
    }
  }
  cout << n << '\n';
  return 0;
}
