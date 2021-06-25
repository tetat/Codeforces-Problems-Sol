/// Problem Name: Remainder
/// Problem Link: https://codeforces.com/problemset/problem/1165/A

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
  int n, x, y;
  cin >> n >> x >> y;
  string s;
  cin >> s;
  int ans = 0;
  for (int i = n-1;i >= 0;i--, x--, y--){
    if (x==0){
      //if (s[i]=='0')ans++;
      break;
    }
    if (y==0){
      if (s[i]=='0'){ans++;}
      continue;
    }
    if (s[i]=='1')ans++;
  }
  cout << (ans) << '\n';
  return 0;
}
