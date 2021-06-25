/// Problem Name: Yet Another Palindrome Problem
/// Problem Link: https://codeforces.com/problemset/problem/1324/B

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
    int n, el;
    cin >> n;
    vector <int> v[n+1];
    for (int i = 0;i < n;i++){
      cin >> el;
      v[el].pb(i);
    }
    string ans = "NO";
    for (int i = 1;i <= n;i++){
      int mn = n+1;
      int mx = 0;
      int len = v[i].size();
      for (int j = 0;j < len;j++){
        mn = min(mn, v[i][j]);
        mx = max(mn, v[i][j]);
      }
      if (mx-mn > 1){
        ans = "YES";
        break;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
