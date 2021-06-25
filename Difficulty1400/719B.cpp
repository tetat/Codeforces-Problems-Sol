/// Problem Name: Anatoly and Cockroaches
/// Problem Link: https://codeforces.com/problemset/problem/719/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define IO cin.tie(0),cout.tie(0)
#define ISWS ios::sync_with_stdio(0)
typedef long long Long;
void FastIO(){ISWS;IO;}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  string rbr;
  string brb;
  for (int i = 0;i < n;i++){
    if (i%2)rbr += 'b';
    else rbr += 'r';
    if (i%2)brb += 'r';
    else brb += 'b';
  }
  int x = 0;
  int y = 0;
  for (int i = 0;i < n;i++){
    if (s[i]!=rbr[i]){
      if (rbr[i]=='r')x++;
      else y++;
    }
  }
  int ans = max(x, y);
  x = 0;
  y = 0;
  for (int i = 0;i < n;i++){
    if (s[i]!=brb[i]){
      if (brb[i]=='r')x++;
      else y++;
    }
  }
  ans = min(ans, max(x, y));
  cout << ans << '\n';
  return 0;
}
