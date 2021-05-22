/// Problem Name: Lucky Year
/// Problem Link: https://codeforces.com/problemset/problem/808/A

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
  int n;
  cin >> n;
  int tmp = n;
  int d = 1;
  tmp /= 10;
  while (tmp){
    tmp /= 10;
    d *= 10;
  }
  int mod = n%d;
  cout << (d-mod) << '\n';
  return 0;
}
