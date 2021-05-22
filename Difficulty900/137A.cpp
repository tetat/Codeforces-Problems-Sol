/// Problem Name: Postcards and photos
/// Problem Link: https://codeforces.com/problemset/problem/137/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e9;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  string s;
  cin >> s;
  int n = s.size();
  int i = 0;
  int j = 0;
  int ans = 0;
  while (i < n){
    int cnt = 0;
    while (j < n && s[i]==s[j]){
      cnt++;j++;
    }
    ans += ceil(cnt/5.0);
    i = j;
  }
  cout << ans << '\n';
  return 0;
}
