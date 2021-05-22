/// Problem Name: Piles With Stones
/// Problem Link: https://codeforces.com/problemset/problem/1013/A

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
  int a = 0;
  int b = 0;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    a += el;
  }
  for (int i = 0;i < n;i++){
    cin >> el;
    b += el;
  }
  if (a >= b)cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
