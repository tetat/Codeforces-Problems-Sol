/// Problem Name: Fake News (easy)
/// Problem Link: https://codeforces.com/problemset/problem/802/G

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
  int len = s.size();
  string t = "heidi";
  int i = len-1;
  int j = 4;
  while (i >= 0 && j >= 0){
    if (s[i] == t[j]){
      i--;j--;
    }else i--;
  }
  if (j >= 0)cout << "NO" << '\n';
  else cout << "YES" << '\n';
  return 0;
}
