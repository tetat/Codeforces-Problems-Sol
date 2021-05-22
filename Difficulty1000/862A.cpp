/// Problem Name: Mahmoud and Ehab and the MEX
/// Problem Link: https://codeforces.com/problemset/problem/862/A

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
  int n, x, el;
  vector <int> mark(101, 0);
  cin >> n >> x;
  for (int i = 0;i < n;i++){
    cin >> el;
    mark[el] = 1;
  }
  int ans = 0;
  for (int i = 0;i < x;i++){
    if (mark[i]==0)ans++;
  }
  if (mark[x])ans++;
  cout << ans << '\n';
  return 0;
}
