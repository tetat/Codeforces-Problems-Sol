/// Problem Name: Regular Bracket Sequence
/// Problem Link: https://codeforces.com/problemset/problem/26/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int main()
{
  FastIO();
  int tc, ca = 0;
  string s;
  cin >> s;
  int n = s.size();
  stack <char> S;
  int ans = 0;
  for (int i = 0;i < n;i++){
    if (s[i]=='(')S.push(s[i]);
    else {
      if (!S.empty()){
        S.pop();
        ans += 2;
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
