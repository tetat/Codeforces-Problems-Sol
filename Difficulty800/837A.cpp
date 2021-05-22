/// Problem Name: Text Volume
/// Problem Link: https://codeforces.com/problemset/problem/837/A

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
  //ios::sync_with_stdio(0);
  //cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n;
  cin >> n;
  string s;
  getchar();
  getline(cin, s);
  int cnt = 0;
  int ans = 0;
  //cout << s << '\n';
  for (int i = 0;i < n;i++){
    if (s[i] == ' '){
      ans = max(ans, cnt);
      cnt = 0;
    }
    else if (s[i] >= 65 && s[i] <= 90)cnt++;
  }
  ans = max(ans, cnt);
  cout << ans << '\n';
  return 0;
}
