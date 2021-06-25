/// Problem Name: Little Girl and Game
/// Problem Link: https://codeforces.com/problemset/problem/276/B

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

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  string s;
  cin >> s;
  int n = s.size();
  vector <int> m(26, 0);
  for (int i = 0;i < n;i++){
    m[s[i]-97]++;
  }
  int d = 0;
  for (int i = 0;i < 26;i++){
    if (m[i]%2)d++;
  }
  string ans;
  if (d < 2)ans = "First";
  else {
    if (n%2)ans = "First";
    else ans = "Second";
  }
  cout << ans << '\n';
  return 0;
}
