/// Problem Name: Team
/// Problem Link: https://codeforces.com/problemset/problem/401/C

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

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, m;
  cin >> n >> m;
  string ans;
  if (n-m > 1)ans = "-1";
  else if (n+n+2 < m)ans = "-1";
  else {
    ans.clear();
    if (n >= m){
      for (int i = 0;i < n+m;i++){
        if (i%2)ans += 49;
        else ans += 48;
      }
    }else if (n+n <= m){
      for (int i = 0;i < n;i++){
        ans += 49;
        ans += 49;
        ans += 48;
      }
      m -= (n+n);
      while (m--){
        ans += 49;
      }
    }else {
      int ex = m%n;
      for (int i = 0;i < n;i++){
        if (ex){
          ans += 49;
          ex--;
        }
        ans += 49;
        ans += 48;
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
