/// Problem Name: Diversity
/// Problem Link: https://codeforces.com/problemset/problem/844/A

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
  string s;
  cin >> s;
  int n = s.size();
  int k;
  cin >> k;
  if (n < k){
    cout << "impossible" << '\n';
    return 0;
  }
  vector <int> mark(26, 0);
  for (int i = 0;i < n;i++){
    mark[s[i]-97]++;
  }
  int d = 0;
  for (int i = 0;i < 26;i++){
    if (mark[i])d++;
  }
  int ans = k-d;
  if (ans < 0)ans = 0;
  cout << ans << '\n';
  return 0;
}
