/// Problem Name: Mancala
/// Problem Link: https://codeforces.com/problemset/problem/975/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  Long n = 14;
  vector <Long> v(n);
  for (Long i = 0;i < n;i++){
    cin >> v[i];
  }
  Long ans = 0;
  for (Long i = 0;i < n;i++){
    if (v[i]){
      vector <Long> tm = v;
      tm[i] = 0;
      Long d = v[i]/n;
      for (Long j = 0;j < n;j++)tm[j] += d;
      Long nxt = v[i]%n;
      for (Long j = (i+1)%n; nxt-- ;j = (j+1)%n)tm[j]++;
      Long cnt = 0;
      for (Long j = 0;j < n;j++){
        if (tm[j]%2==0)cnt += tm[j];
      }
      ans = max(ans, cnt);
    }
  }
  cout << ans << '\n';
  return 0;
}
