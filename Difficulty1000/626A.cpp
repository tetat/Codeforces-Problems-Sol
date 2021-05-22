/// Problem Name: Robot Sequence
/// Problem Link: https://codeforces.com/problemset/problem/626/A

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
  int n, el;
  string s;
  cin >> n >> s;
  int ans = 0;
  for (int i = 1;i < n;i+=2){
    int L = 0;
    int R = i;
    for ( ;R < n;R++, L++){
      int x = 0;
      int y = 0;
      for (int j = L;j-1 < R;j++){
        if (s[j] == 'D')x++;
        if (s[j] == 'U')x--;
        if (s[j] == 'R')y++;
        if (s[j] == 'L')y--;
      }
      if (x == 0 && y == 0)ans++;
    }
  }
  cout << ans << '\n';
  return 0;
}
