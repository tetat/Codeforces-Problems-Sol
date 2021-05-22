/// Problem Name: Neverending competitions
/// Problem Link: https://codeforces.com/problemset/problem/765/A

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
  int n, el;
  cin >> n;
  string s;
  cin >> s;
  string p;
  for (int i = 0;i < n;i++){
    cin >> p;
  }
  string ans = "home";
  if (n%2)ans = "contest";
  cout << ans << '\n';
  return 0;
}
