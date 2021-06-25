/// Problem Name: Numbers on the Chessboard
/// Problem Link: https://codeforces.com/problemset/problem/1027/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  Long n, q;
  cin >> n >> q;
  Long d = (n*n+1)/2;
  while (q--){
    Long x, y;
    cin >> x >> y;
    Long num = 0;
    if (n%2){
      num = ((n/2)*x) + (x+1)/2;
      Long cut = (n-1) - ((n/2) + (y/2));
      if ((x+y)%2){
        if (x%2)num += (d-1);
        else num += d;
      }
      num -= cut;
    }else {
      if ((x+y)%2){
        num = (n+x-1) * (n/2);
        num += ((y+1)/2);
      }else {
        num = (n/2)*x;
        Long cut = n - ((y/2)+(n/2));
        if (x%2)cut--;
        num -= cut;
      }
    }
    cout << num << '\n';
  }
  return 0;
}
