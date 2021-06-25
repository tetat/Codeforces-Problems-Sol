/// Problem Name: Vicious Keyboard
/// Problem Link: https://codeforces.com/problemset/problem/801/A

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
  int n;
  string s;
  cin >> s;
  int ans = 0;
  int mx = 0;
  n = s.size();
  int i = 0;
  bool in = true;
  while (i < n){
    int v = 0;
    int k = 0;
    while (i < n && s[i]=='V'){i++;v++;}
    while (i < n && s[i]=='K'){i++;k++;}
    if (v && k)ans++;
    if (in){
      if (v==2 && k==0){ans++;in = false;}
      else if (v==0 && k==2){ans++;in = false;}
      else if (v > 2 || k > 2){ans++;in = false;}
    }
  }
  cout << ans << '\n';
  return 0;
}
