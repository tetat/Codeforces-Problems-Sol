/// Problem Name: Alyona and copybooks
/// Problem Link: https://codeforces.com/problemset/problem/740/A

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

Long dp[12];

int main()
{
  FastIO();
  int tc, ca = 0;
  Long n, a, b, c;
  cin >> n >> a >> b >> c;
  if (n%4){
    dp[1] = a;
    dp[2] = min(dp[1]+a, b);
    dp[3] = min(dp[2]+a, min(dp[1]+b, c));
    for (int i = 4;i < 12;i++){
      dp[i] = min(dp[i-1]+a, min(dp[i-2]+b, dp[i-3]+c));
    }
//    for (int i = 1;i < 12;i++){
//      cout << dp[i] << ' ';
//    }cout << '\n';
    int ff = 4 - (n%4);
    int ss = ff+4;
    int tt = ss+4;
    //cout << ff << ' ' << ss << ' ' << tt << '\n';
    cout << min(dp[ff], min(dp[ss], dp[tt])) << '\n';
  }else cout << "0" << '\n';
  return 0;
}
