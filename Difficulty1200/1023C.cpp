/// Problem Name: Bracket Subsequence
/// Problem Link: https://codeforces.com/problemset/problem/1023/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, k;
  string s;
  cin >> n >> k >> s;
  vector <int> mark(n, 0);
  int d = k/2;
  int i = 0;
  while (i < n && d){
    if (s[i]=='('){
      mark[i] = 1;
      d--;
    }
    i++;
  }
  d = k/2;
  i = n-1;
  while (i >= 0 && d){
    if (s[i]==')'){
      mark[i] = 1;
      d--;
    }
    i--;
  }
  string ans;
  for (int i = 0;i < n;i++){
    if (mark[i])ans += s[i];
  }
  cout << ans << '\n';
  return 0;
}
