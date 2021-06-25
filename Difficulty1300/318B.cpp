/// Problem Name: Strings of Power
/// Problem Link: https://codeforces.com/problemset/problem/318/B

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

const int N = 1e6;

int dp[N+1];

int main()
{
  FastIO();
  int tc, ca = 0;
  string s;
  cin >> s;
  int n = s.size();
  string h = "heavy";
  string m = "metal";
  for (int i = n-1;i >= 0;i--){
    if (i-4 >= 0){
      bool ok = true;
      for (int j = i-4, k = 0;j <= i;j++, k++){
        if (s[j] != m[k]){
          ok = false;
          break;
        }
      }
      if (ok){
        dp[i] = 1;
        //i = i-4;
        //break;
      }
    }
  }
//  for (int i = 0;i < n;i++){
//    cout << dp[i];
//  }cout << '\n';
  for (int i = n-1;i >= 0;i--){
    dp[i] += dp[i+1];
  }
//  for (int i = 0;i < n;i++){
//    cout << dp[i];
//  }cout << '\n';
  Long ans = 0;
  for (int i = 0;i < n;i++){
    if (i+4 < n){
      bool ok = true;
      for (int j = 0;j < h.size();j++){
        if (s[i+j] != h[j]){
          ok = false;
          break;
        }
      }
      if (ok){
        ans += dp[i];
        //i += 4;
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
