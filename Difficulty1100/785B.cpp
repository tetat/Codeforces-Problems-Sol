/// Problem Name: Anton and Classes
/// Problem Link: https://codeforces.com/problemset/problem/785/B

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
  int n, m, el;
  int pmnr = INT_MAX;
  int pmxl = 0;
  int cmnr = INT_MAX;
  int cmxl = 0;
  int l, r;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> l >> r;
    cmnr = min(cmnr, r);
    cmxl = max(cmxl, l);
  }
  cin >> m;
  for (int i = 0;i < m;i++){
    cin >> l >> r;
    pmnr = min(pmnr, r);
    pmxl = max(pmxl, l);
  }
  int ans = max(0, max(pmxl-cmnr, cmxl-pmnr));
  cout << ans << '\n';
  return 0;
}
