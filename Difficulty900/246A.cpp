/// Problem Name: Buggy Sorting
/// Problem Link: https://codeforces.com/problemset/problem/246/A

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
  int n;
  cin >> n;
  if (n < 3)cout << "-1" << '\n';
  else {for (int i = n;i > 0;i--)cout << i << ' ';cout << '\n';}
  return 0;
}
