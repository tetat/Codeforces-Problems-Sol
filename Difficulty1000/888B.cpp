/// Problem Name: Buggy Robot
/// Problem Link: https://codeforces.com/problemset/problem/888/B

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
  int n, el;
  string s;
  cin >> n >> s;
  int mx = 0;
  int U = 0;
  int D = 0;
  int L = 0;
  int R = 0;
  for (int i = 0;i < n;i++){
    if (s[i] == 'U')U++;
    if (s[i] == 'D')D++;
    if (s[i] == 'L')L++;
    if (s[i] == 'R')R++;
  }
  mx += min(U, D) * 2;
  mx += min(L, R) * 2;
  cout << mx << '\n';
  return 0;
}
