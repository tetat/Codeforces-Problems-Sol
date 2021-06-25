/// Problem Name: Text Document Analysis
/// Problem Link: https://codeforces.com/problemset/problem/723/B

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
  int n;
  string s;
  cin >> n >> s;
  int a = 0;
  int b = 0;
  bool oc = false;
  int i = 0;
  while (i < n){
    if (s[i]=='('){i++;oc = true;}
    if (oc){
      while (i < n){
        int cnt = 0;
        while (i < n && s[i]=='_')i++;
        while (i < n && s[i]!='_' && s[i]!=')'){cnt++;i++;}
        if (cnt)b++;
        if (s[i]==')'){
          i++;
          oc = false;
          break;
        }
      }
    }
    int cnt = 0;
    while (i < n && s[i]=='_')i++;
    while (i < n && s[i]!='_' && s[i]!='('){cnt++;i++;}
    a = max(a, cnt);
  }
  cout << a << ' ' << b << '\n';
  return 0;
}
