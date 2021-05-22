/// Problem Name: Bark to Unlock
/// Problem Link: https://codeforces.com/problemset/problem/868/A

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
  string s;
  int n;
  cin >> s >> n;
  string st[n];
  for (int i = 0;i < n;i++){
    cin >> st[i];
  }
  bool ans = false;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      if ((st[i][0]==s[0] && st[i][1]==s[1])){
        ans = true;
        break;
      }
      if ((st[i][1]==s[0] && st[j][0]==s[1])){
        ans = true;
        break;
      }
      if ((st[j][0]==s[0] && st[j][1]==s[1])){
        ans = true;
        break;
      }
      if ((st[j][1]==s[0] && st[i][0]==s[1])){
        ans = true;
        break;
      }
    }
    if (ans)break;
  }
  if (ans)cout << "yes" << '\n';
  else cout << "no" << '\n';
  return 0;
}
