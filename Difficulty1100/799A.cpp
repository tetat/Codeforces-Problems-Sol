/// Problem Name: Carrot Cakes
/// Problem Link: https://codeforces.com/problemset/problem/799/A

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
  int n, t, k, d;
  cin >> n >> t >> k >> d;
  int wo = ceil(n/double(k)) * t;
  string ans = "NO";
  for (int i = 1, j = 1, it = 1;it < wo;it++){
    if (i*t==it){n -= k;i++;}
    if (d+j*t==it){n -= k;j++;}
    if (n<1){
      ans = "YES";
      break;
    }
  }
  cout << ans << '\n';
  return 0;
}
