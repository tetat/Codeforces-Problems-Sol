/// Problem Name: Bear and String Distance
/// Problem Link: https://codeforces.com/problemset/problem/628/C

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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  string ans;
  for (int i = 0;i < n;i++){
    int mx = -1;
    int ch = int(s[i]);
    for (int j = 97;j <= 122;j++){
      int d = abs(int(s[i]-j));
      if (mx < d && d <= k){
        mx = d;
        ch = j;
      }
    }
    k -= mx;
    ans += ch;
  }
  if (k)ans = "-1";
  cout << ans << '\n';
  return 0;
}
