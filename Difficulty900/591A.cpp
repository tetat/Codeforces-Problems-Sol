/// Problem Name: Wizards' Duel
/// Problem Link: https://codeforces.com/problemset/problem/591/A

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
  double L, p, q;
  cin >> L >> p >> q;
  double ans = ((p*100/(p+q))*L)/100;
  cout << fixed << setprecision(4);
  cout << ans << '\n';
  return 0;
}
