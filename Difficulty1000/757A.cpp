/// Problem Name: Gotta Catch Em' All!
/// Problem Link: https://codeforces.com/problemset/problem/757/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e4;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  string s;
  cin >> s;
  int n = s.size();
  vector <int> mark(26, 0);
  string w = "aulbsr";
  int B = 0;
  for (int i = 0;i < n;i++){
    if (s[i]>=97)mark[s[i]-97]++;
    else if (s[i]=='B')B++;
  }
  mark[w[0]-97] /= 2;
  mark[w[1]-97] /= 2;
  for (int i = 0;i < int(w.size());i++){
    B = min(B, mark[w[i]-97]);
  }
  cout << B << '\n';
  return 0;
}
