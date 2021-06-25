/// Problem Name: Row
/// Problem Link: https://codeforces.com/problemset/problem/982/A

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
  int n;
  string s;
  cin >> n >> s;
  string ans = "yes";
  int i = 0;
  while (i < n){
    int one = 0;
    int zero = 0;
    while (i < n && s[i]=='1'){i++;one++;}
    while (i < n && s[i]=='0'){i++;zero++;}
    if (one > 1 || zero > 2){ans = "no";break;}
  }
  if (n==1 && s[0]=='0')ans = "no";
  int R = 0;
  int L = 0;
  i = 0;
  while (i < n && s[i]=='0'){L++;i++;}
  i = n-1;
  while (i >= 0 && s[i]=='0'){R++;i--;}
  if (L>1 || R>1)ans = "no";
  cout << ans << '\n';
  return 0;
}
