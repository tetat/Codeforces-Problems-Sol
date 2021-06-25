/// Problem Name: Polo the Penguin and Matrix
/// Problem Link: https://codeforces.com/problemset/problem/289/B

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

const int N = 1e4;

vector <pair <int, int> > dp(N+1);

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, m, d, el;
  cin >> n >> m >> d;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      cin >> el;
      int up = 1;
      int down = 1;
      dp[el].first++;
      for (int k = el-d;k >= 0;k -= d, down++){
        dp[k].first++;
        dp[k].second += down;
      }
      for (int k = el+d;k <= N;k += d, up++){
        dp[k].first++;
        dp[k].second += up;
      }
    }
  }
  int tot = n*m;
  int ans = INT_MAX;
  for (int i = 0;i <= N;i++){
    if (dp[i].first == tot){
      ans = min(ans, dp[i].second);
    }
  }
  if (ans == INT_MAX)ans = -1;
  cout << ans << '\n';
  return 0;
}
