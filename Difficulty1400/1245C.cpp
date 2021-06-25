/// Problem Name: Constanze's Machine
/// Problem Link: https://codeforces.com/problemset/problem/1245/C

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

Long mod = 1e9 + 7;

int main()
{
  FastIO();
  int tc, ca = 0;
  string s;
  cin >> s;
  vector <Long> a;
  int w = 0;
  int m = 0;
  int I = 0;
  int n = s.size();
  while (I < n){
    while (I < n && s[I]!='n' && s[I]!='u'){
      if (s[I]=='m')m++;
      if (s[I]=='w')w++;
      I++;
    }
    int cnt = 0;
    while (I < n && s[I]=='n'){
      cnt++;
      I++;
    }
    if (cnt)a.pb(cnt);
    cnt = 0;
    while (I < n && s[I]=='u'){
      cnt++;
      I++;
    }
    if (cnt)a.pb(cnt);
  }
  Long ans = 0;
  if (w==0 && m==0){
    for (int i = 0;i < a.size();i++){
      if (a[i] > 1){
        Long ff = 1;
        Long ss = 2;
        Long tm = a[i]-1;
        while (--tm){
          Long temp = ss;
          ss = (ff+ss)%mod;
          ff = temp;
        }
        a[i] = ss;
      }
    }
    ans = 1;
    for (int i = 0;i < a.size();i++){
      ans = (ans * a[i]) % mod;
    }
  }
  cout << ans << '\n';
  return 0;
}
