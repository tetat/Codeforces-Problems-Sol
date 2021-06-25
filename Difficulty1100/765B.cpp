/// Problem Name: Code obfuscation
/// Problem Link: https://codeforces.com/problemset/problem/765/B

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
  int freq = 0;
  vector <int> mark(26, 0);
  for (int i = 0;i < n;i++){
    if (mark[s[i]-97] == 0){
      mark[s[i]-97] = i+1;
      freq++;
    }
  }
  string ans = "YES";
  int i = 1;
  for ( ;i < 26;i++){
    if (mark[i-1] >= mark[i]){
      break;
    }
  }
  while (i < 26 && mark[i]==0)i++;
  if (i < 26)ans = "NO";
  if (mark[0]==0)ans = "NO";
  cout << ans << '\n';
  return 0;
}
