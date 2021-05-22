/// Problem Name: Div. 64
/// Problem Link: https://codeforces.com/problemset/problem/887/A

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
  string s;
  cin >> s;
  int n = s.size();
  int zero = 0;
  int one = 0;
  int i = 0;
  while (i < n && s[i]!='1')i++;
  while (i < n){
    while (i < n && s[i]=='1'){one++;i++;}
    while (i < n && s[i]=='0'){zero++;i++;}
  }
  string ans;
  if (one==0 || zero<6)ans = "no";
  else ans = "yes";
  cout << ans << '\n';
  return 0;
}
