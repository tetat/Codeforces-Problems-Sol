/// Problem Name: Kuroni and Simple Strings
/// Problem Link: https://codeforces.com/problemset/problem/1305/B

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
  int R = n-1;
  int L = 0;
  vector <int> p;
  while (L < R){
    while (L < R && s[L]!='(')L++;
    while (L < R && s[R]!=')')R--;
    if (L != R){
      p.pb(L+1);
      p.pb(R+1);
    }
    L++;
    R--;
  }
  int len = p.size();
//  if (len==n){
//    p.erase(p.begin()+len-1);
//    len--;
//    p.erase(p.begin()+len-1);
//    len--;
//  }
  sort(p.begin(), p.end());
  if (len==0)cout << 0 << '\n';
  else {
    cout << 1 << '\n' << len << '\n';
    for (int i = 0;i < len;i++){
      cout << p[i];
      if (i != len-1)cout << ' ';
    }cout << '\n';
  }
  return 0;
}
