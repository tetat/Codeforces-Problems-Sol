/// Problem Name: Not simply beatiful strings
/// Problem Link: https://codeforces.com/problemset/problem/955/B

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  string s;
  cin >> s;
  vector <int> m(26, 0);
  for (int i = 0;i < s.size();i++){
    m[s[i]-97]++;
  }
  int d = 0;
  int one = 0;
  for (int i = 0;i < 26;i++){
    if (m[i] > 1)d++;
    if (m[i])one++;
  }
  if ((one==2 && d > 1) || (one==3 && d > 0) || one==4)cout << "yes" << '\n';
  else cout << "no" << '\n';
  return 0;
}
