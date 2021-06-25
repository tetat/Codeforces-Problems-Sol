/// Problem Name: Unusual Competitions
/// Problem Link: https://codeforces.com/problemset/problem/1322/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int main()
{
  faster();
  int tc, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  int ans = 0;
  int b = 0;
  for (int i = 0;i < n;i++){
    if (s[i]=='(')b++;
    else {
      b--;
      if (b < 0)ans += 2;
    }
  }
  if (b)ans = -1;
  cout << ans << '\n';
  return 0;
}
