/// Problem Name: T-Shirt Hunt
/// Problem Link: https://codeforces.com/problemset/problem/807/B

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

bool mark[N+1];
int p, x, y;
int dp[N/2];

void make(){
  for (int i = y;i <= N;i++){
    int r = (i/50)%475;
    for (int j = 0;j < 25;j++){
      r = (r*96 + 42) % 475;
      if (r+26 == p){
        mark[i] = true;
        break;
      }
    }
  }
}

int solve(int n){
  if (mark[n])return 0;
  if (dp[n])return dp[n];
  dp[n] = solve(n+100)+1;
  if (n-50 >= y)dp[n] = min(dp[n], solve(n-50));
  return dp[n];
}

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> p >> x >> y;
  make();
  cout << solve(x) << '\n';
  return 0;
}
