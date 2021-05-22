/// Problem Name: Even Odds
/// Problem Link: https://codeforces.com/problemset/problem/318/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long n, k;
  cin >> n >> k;
  long long odd = (n+1)/2;
  if (odd >= k)cout << k+(k-1) << '\n';
  else cout << (k-odd)*2 << '\n';
  return 0;
}
