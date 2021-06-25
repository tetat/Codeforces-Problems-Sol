/// Problem Name: Oh Those Palindromes
/// Problem Link: https://codeforces.com/problemset/problem/1063/A

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
  int n;
  string s;
  cin >> n >> s;
  sort(s.begin(), s.end());
  cout << s << '\n';
  return 0;
}
