/// Problem Name: 3-palindrome
/// Problem Link: https://codeforces.com/problemset/problem/805/B

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
  cin >> n;
  string s;
  for (int i = 0;i < n/2;i++){
    if (i%2)s += "aa";
    else s += "bb";
  }
  if (n%2){
    if (s[s.size()-1]=='a')s += 'b';
    else s += 'a';
  }
  cout << s << '\n';
  return 0;
}
