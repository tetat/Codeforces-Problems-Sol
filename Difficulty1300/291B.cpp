/// Problem Name: Command Line Arguments
/// Problem Link: https://codeforces.com/problemset/problem/291/B

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

const int N = 1e4;

int main()
{
  FastIO();
  int tc, ca = 0;
  string s;
  getline(cin, s);
  int n = s.size();
  int i = 0;
  while (i < n){
    string p = "<";
    while (i < n && s[i]==' ')i++;
    if (s[i]=='"'){
      i++;
      while (i < n && s[i]!='"'){
        p += s[i];
        i++;
      }i++;
      p += '>';
      cout << p << '\n';
    }else {
      bool ok = false;
      while (i < n && s[i]!=' '){
        p += s[i];
        ok = true;
        i++;
      }
      p += '>';
      if (ok)cout << p << '\n';
    }
    //cout << p << '\n';
  }
  return 0;
}
