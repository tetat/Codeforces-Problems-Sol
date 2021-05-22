/// Problem Name: Jamie and Alarm Snooze
/// Problem Link: https://codeforces.com/problemset/problem/916/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e4;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int x, h, m;
  cin >> x >> h >> m;
  int y = 0;
  while ((h/10)!=7 && (h%10)!=7 && (m/10)!=7 && (m%10)!=7){
    y++;
    m -= x;
    if (m < 0){
      m = 60+m;
      h--;
      if (h<0)h = 23;
    }
  }
  cout << y << '\n';
  return 0;
}
