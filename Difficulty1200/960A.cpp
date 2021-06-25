/// Problem Name: Check the string
/// Problem Link: https://codeforces.com/problemset/problem/960/A

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
  string s;
  cin >> s;
  int a = 0;
  int b = 0;
  int c = 0;
  int n = s.size();
  for (int i = 0;i < n;i++){
    if (s[i]=='a')a++;
    if (s[i]=='b')b++;
    if (s[i]=='c')c++;
  }
  int i = 0;
  while (i < n && s[i]=='a')i++;
  while (i < n && s[i]=='b')i++;
  while (i < n && s[i]=='c')i++;
  if (i==n && (a==c || b==c) && a && b && c)cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
