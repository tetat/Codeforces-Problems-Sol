/// Problem Name: Subsequence Hate
/// Problem Link: https://codeforces.com/problemset/problem/1363/B

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

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    string s;
    cin >> s;
    int n = s.size();
    int ans = INT_MAX;
    string tm;
    for (int i = 0;i < n;i++)tm += 48;
    for (int i = 0;i < n;i++){
      int d = 0;
      for (int j = 0;j < n;j++){
        if (s[j] != tm[j])d++;
      }
      ans = min(ans, d);
      tm[i] = 49;
    }
    for (int i = 0;i < n;i++){
      int d = 0;
      for (int j = 0;j < n;j++){
        if (s[j] != tm[j])d++;
      }
      ans = min(ans, d);
      tm[i] = 48;
    }
    cout << ans << '\n';
  }
  return 0;
}
