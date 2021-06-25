/// Problem Name: Simple Strings
/// Problem Link: https://codeforces.com/problemset/problem/665/C

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

const int N = 1e6;

int main()
{
  FastIO();
  int tc, ca = 0;
  string s;
  cin >> s;
  int n = s.size();
  vector <int> m(n, 0);
  vector <int> p;
  int L = 0;
  int R = 0;
  while (R < n){
    int cnt = 0;
    while (R < n && s[L]==s[R]){R++;cnt++;}
    m[R-1] = cnt;
    p.pb(R-1);
    L = R;
  }
//  for (int i = 0;i < int(p.size());i++){
//    cout << p[i] << ' ' << m[p[i]] << '\n';
//  }
  for (int i = 0;i < int(p.size());i++){
    if (m[p[i]] > 1){
      int len = m[p[i]]/2;
      int ch = 97;
      for ( ;ch <= 122;ch++){
        if (p[i]==n-1){
          //cout << s[p[i]] << '\n';
          if (ch != s[p[i]])break;
        }else {
          //cout << s[p[i]] << ' ' << s[p[i]+1] << '\n';
          if (ch != s[p[i]] && ch != s[p[i]+1])break;
        }
      }
      //cout << ch << '\n';
      if (m[p[i]]%2){
        for (int j = p[i]-1; len-- ;j -= 2)s[j] = ch;
      }else {
        for (int j = p[i]; len-- ;j -= 2)s[j] = ch;
      }
    }
  }
  cout << s << '\n';
  return 0;
}
