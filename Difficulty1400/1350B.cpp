/// Problem Name: Orac and Models
/// Problem Link: https://codeforces.com/problemset/problem/1350/B

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

const int N = 1e5;

vector <int> d[N+1];
vector <int> v(N+1);

void make(){
  for (int i = N;i > 1;i--){
    d[i].pb(1);
    for (int j = 2;j*j <= i;j++){
      if (i%j==0){
        if (j*j == i)d[i].pb(j);
        else {
          d[i].pb(j);
          d[i].pb(i/j);
        }
      }
    }
    //sort(d[i].begin(), d[i].end(), greater<int>());
  }
}

int solve(int n){
  vector <int> dp(n+1, 1);
  //dp[1] = 1;
  for (int i = 2;i <= n;i++){
    for (int j = 0;j < d[i].size();j++){
      if (v[i] > v[d[i][j]])dp[i] = max(dp[i], dp[d[i][j]]+1);
      //else dp[i] = max(dp[i], dp[d[i][j]]+0);
    }
  }
  int ret = 0;
  for (int i = 1;i <= n;i++){
    ret = max(ret, dp[i]);
    //cout << dp[i] << ' ';
  }//cout << '\n';
  return ret;
}

int main()
{
  FastIO();
  int tc, ca = 0;
  make();
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++){
      cin >> v[i];
    }
    cout << solve(n) << '\n';
  }
  return 0;
}
