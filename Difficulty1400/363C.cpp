/// Problem Name: Fixing Typos
/// Problem Link: https://codeforces.com/problemset/problem/363/C

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

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  string s;
  cin >> s;
  int n = s.size();
  string ans;
  int R = 0;
  while (R < n){
    int L = R;
    int i = R;
    while (R < n && s[i]==s[R])R++;
    if (R-i == 1){
      ans += s[i];
      //R++;
      continue;
    }
    int j = R;
    while (R < n && s[j]==s[R])R++;
    int two = 2;
    while (i < j && two--){
      ans += s[i];
      i++;
    }
    if (j < n)ans += s[j];
  }
  cout << ans << '\n';
  return 0;
}
