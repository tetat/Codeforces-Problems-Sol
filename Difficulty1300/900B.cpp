/// Problem Name: Position in Fraction
/// Problem Link: https://codeforces.com/problemset/problem/900/B

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
//  cout << fixed << setprecision(25);
//  for (double i = 1;i <= 20;i++){
//    for (double j = i+1;j <= 25;j++){
//      int a = i;
//      int b = j;
//      cout << a << ' ' << b << ": " << (i/j) << '\n';
//    }
//  }
  int a, b, c;
  cin >> a >> b >> c;
  int ans = -1;
  for (int i = 0;i < b;i++){
    a *= 10;
    int x = a/b;
    if (x==c){
      ans = i+1;
      break;
    }
    a %= b;
  }
  cout << ans << '\n';
  return 0;
}
