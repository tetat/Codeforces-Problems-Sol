/// Problem Name: The number on the board
/// Problem Link: https://codeforces.com/problemset/problem/835/B

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
  int k;
  string s;
  cin >> k >> s;
  vector <int> mark(10, 0);
  int sum = 0;
  int n = s.size();
  for (int i = 0;i < n;i++){
    mark[s[i]-48]++;
    sum += s[i]-48;
  }
  int ans = 0;
  /// lol lol lol
  for (int i = 0;i < 10 && sum < k;i++){
    while (mark[i]-- && sum < k){sum += 9-i;ans++;}
  }
  cout << ans << '\n';
  return 0;
}
