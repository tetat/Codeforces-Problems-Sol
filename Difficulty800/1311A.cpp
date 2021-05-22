/// Problem Name: Add Odd or Subtract Even
/// Problem Link: https://codeforces.com/problemset/problem/1311/A

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
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if (a < b){
      if ((b-a)%2)ans = 1;
      else ans = 2;
    }
    else if (a > b){
      if ((a-b)%2)ans = 2;
      else ans = 1;
    }
    cout << ans << '\n';
  }
  return 0;
}
