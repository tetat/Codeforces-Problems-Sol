/// Problem Name: Single Wildcard Pattern Matching
/// Problem Link: https://codeforces.com/problemset/problem/1023/AN

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
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;
  string ans = "YES";
  int mi = -1;
  for (int i = 0;i < n;i++){
    if (s[i]=='*'){
      mi = i;
      break;
    }
  }
  if (mi==-1){
    if (s != t)ans = "NO";
  }
  else {
    int L = -1;
    int R = m;
    string pref;
    string suf;
    for (int i = 0;i < mi;i++){
      pref += s[i];
    }
    for (int i = mi+1;i < n;i++){
      suf += s[i];
    }
    int len_p = pref.size();
    int len_s = suf.size();
    //if (len_s>1)reverse(suf.begin(), suf.end());
    //cout << suf << '\n';
    //cout << mi << ' ' << n-(mi+1) << '\n';
    //cout << len_p << ' ' << len_s << '\n';
    if (len_p+len_s > m)ans = "NO";
    else if (len_p != mi || len_s != n-(mi+1))ans = "NO";
    else {
      for (int i = 0;i < mi;i++){
        if (pref[i] != t[i]){
          ans = "NO";
          //cout << pref[i] << ' ' << t[i] << '\n';
          break;
        }
      }
      for (int i = len_s-1, j = m-1;i >= 0;i--, j--){
        if (suf[i] != t[j]){
          ans = "NO";
          //cout << suf[i] << ' ' << t[j] << '\n';
          break;
        }
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
