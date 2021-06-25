/// Problem Name: Cut Ribbon
/// Problem Link: https://codeforces.com/problemset/problem/189/A

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

int ans;
int dp[N];
vector <int> a(3);

int solve(int id, int cnt){
  if (id <= 0){
    if (id==0)ans = max(ans, cnt);
    return 0;
  }
  if (dp[id])return dp[id];
  for (int i = 0;i < a.size();i++){
    cnt++;
    dp[id] = solve(id-a[i], cnt)+1;
    cnt--;
  }
  return dp[id];
}

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n >> a[0] >> a[1] >> a[2];
  sort(a.begin(), a.end());
  int ajaira = solve(n, 0);
  cout << ans << '\n';
  return 0;
}
