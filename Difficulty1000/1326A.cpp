/// Problem Name: Bad Ugly Numbers
/// Problem Link: https://codeforces.com/problemset/problem/1326/A

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
    int n;
    string ans = "-1";
    cin >> n;
    if (n > 1){
      ans.clear();
      ans += '2';
      for (int i = 1;i < n;i++)ans += '7';
    }
    cout << ans << '\n';
  }
  return 0;
}
