/// Problem Name: LLPS
/// Problem Link: https://codeforces.com/problemset/problem/202/A

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
  vector <int> mark(26, 0);
  for (int i = 0;i < len;i++){
    mark[s[i]-97]++;
  }
  /// greedy
  string ans;
  for (int i = 25;i >= 0;i--){
    while (mark[i]--)ans += (i+97);
    if (ans.size())break;
  }
  cout << ans << '\n';
  return 0;
}
