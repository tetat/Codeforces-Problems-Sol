/// Problem Name: Appleman and Card Game
/// Problem Link: https://codeforces.com/problemset/problem/462/B

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

int mark[26];

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  for (int i = 0;i < n;i++){
    mark[s[i]-65]++;
  }
  vector <int> v;
  for (int i = 0;i < 26;i++){
    v.pb(mark[i]);
  }
  sort(v.begin(), v.end(), greater<int>());
  Long ans = 0;
  for (int i = 0;i < 26;i++){
    Long d = min(v[i], k);
    k -= d;
    ans += d*d;
  }
  cout << ans << '\n';
  return 0;
}
