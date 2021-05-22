/// Problem Name: Exams
/// Problem Link: https://codeforces.com/problemset/problem/194/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e9;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int n, k;
  cin >> n >> k;
  int sum = n*2;
  int ans = n-(k-sum);
  if (ans < 0)ans = 0;
  cout << ans << '\n';
  return 0;
}
