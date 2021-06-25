/// Problem Name: Fox Dividing Cheese
/// Problem Link: https://codeforces.com/problemset/problem/371/B

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


Long gc(Long a, Long b){
  if (b==0)return a;
  else return gc(b, a%b);
}

map <Long, Long> dp;
vector <int> step;
bool found;
Long mn = INT_MAX;


void fil(){
  dp.clear();
  found = false;
  mn = INT_MAX;
}

Long solve(Long id, Long d, Long cnt){
  if (id==d){
    //if (id==d){
      found = true;
      mn = min(mn, cnt);
    //}
    return 0;
  }
  if (dp[id])return dp[id];
  if (id*2 <= d){
    cnt++;
    //dp[id] = min(dp[id], solve(id*2, d, cnt)+1);
    dp[id] = solve(id*2, d, cnt)+1;
    cnt--;
  }else return 0;
  if (id*3 <= d){
    cnt++;
    dp[id] = min(dp[id], solve(id*3, d, cnt)+1);
    cnt--;
  }else return 0;
  if (id*5 <= d){
    cnt++;
    dp[id] = min(dp[id], solve(id*5, d, cnt)+1);
    cnt--;
  }else return 0;
  return dp[id];
}

int main()
{
  FastIO();
  int tc, ca = 0;
  Long a, b;
  cin >> a >> b;
  Long com = gc(a, b);
  Long ajaira = solve(com, a, 0);
  Long ans = 0;
  if (mn != INT_MAX){
    ans += mn;
    fil();
    ajaira = solve(com, b, 0);
    if (mn != INT_MAX)ans += mn;
    else ans = -1;
  }else ans = -1;
  cout << ans << '\n';
  return 0;
}
