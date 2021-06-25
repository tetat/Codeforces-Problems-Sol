/// Problem Name: A Prosperous Lot
/// Problem Link: https://codeforces.com/problemset/problem/934/B

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
  Long k, n = 0;
  Long lim = 1e18;
  cin >> k;
  string num;
  while (k > 1){
    num += '8';
    k -= 2;
  }
  if (k)num += '4';
  if (num.size()>18)num = "-1";
  cout << num << '\n';
  return 0;
}
