/// Problem Name: Run For Your Prize
/// Problem Link: https://codeforces.com/problemset/problem/938/B

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
  int n, el;
  int b = 500000;
  int ff = 1;
  int ss = 1e6;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (el <= b)ff = el;
    if (el > b)ss = min(ss, el);
  }
  cout << max(ff-1, int(1e6)-ss) << '\n';
  return 0;
}
