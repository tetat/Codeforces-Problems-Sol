/// Problem Name: Equations of Mathematical Magic
/// Problem Link: https://codeforces.com/problemset/problem/1064/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
  int n, el;
  cin >> n;

//  for (int i = 0;i <= n;i++){
//    int ans = 0;
//    for (int j = 0;j <= i;j++){
//      if ((i-(i^j)-j) == 0)ans++;
//    }
//    cout << i << ": " << ans << '\n';
//  }
//  for (int i = 0;i <= n;i++){
//    cout << n << " ^ " << i << ":\t\t" <<  (n^i) << '\n';
//  }
  int one = 0;
  while (n){
    one += n%2;
    n /= 2;
  }
  cout << int(pow(2, one)) << '\n';
  }
  return 0;
}
