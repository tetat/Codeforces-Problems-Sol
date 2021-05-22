/// Problem Name: George and Sleep
/// Problem Link: https://codeforces.com/problemset/problem/387/A

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
  int h1, m1;
  char ch;
  cin >> h1 >> ch >> m1;
  int h2, m2;
  cin >> h2 >> ch >> m2;
  int s = h1*60 + m1;
  int t = h2*60 + m2;
  int tf = 1440;
  if (s >= t)tf = s-t;
  else {
    t -= s;
    tf -= t;
  }
  string ans;
  int d = tf/60;
  tf %= 60;
  if (d < 10){
    ans += 48;
    ans += (d+48);
  }
  else {
    ans += (d/10)+48;
    ans += (d%10)+48;
  }
  ans += ch;
  if (tf < 10){
    ans += 48;
    ans += (tf+48);
  }
  else {
    ans += (tf/10)+48;
    ans += (tf%10)+48;
  }
  cout << ans << '\n';
  return 0;
}
