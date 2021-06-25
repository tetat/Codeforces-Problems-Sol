/// Problem Name: Infinite Sequence
/// Problem Link: https://codeforces.com/problemset/problem/675/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  Long a, b, c;
  cin >> a >> b >> c;
  string ans = "NO";
  if (a==b)ans = "YES";
  else if (c!=0){
    Long d = (abs(a-b) / abs(c)) * abs(c);
    //cout << d << ' ' << c << '\n';
    if (c < 0 && a-d==b)ans = "YES";
    if (c > 0 && a+d==b)ans = "YES";
  }
  cout << ans << '\n';
  return 0;
}
