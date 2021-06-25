/// Problem Name: Square Difference
/// Problem Link: https://codeforces.com/problemset/problem/1033/B

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
  cin >> tc;
  while (tc--){
    Long a, b;
    cin >> a >> b;
    string ans = "YES";
    if (a-b > 1)ans = "NO";
    else {
      Long n = a+b;
      for (Long i = 2;i*i <= n;i++){
        if (n%i == 0){
          ans = "NO";
          break;
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
