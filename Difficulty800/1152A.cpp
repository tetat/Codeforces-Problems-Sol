/// Problem Name: Neko Finds Grapes
/// Problem Link: https://codeforces.com/problemset/problem/1152/A

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
  int n, m, el;
  cin >> n >> m;
  vector <int> a(2, 0);
  vector <int> b(2, 0);
  for (int i = 0;i < n;i++){
    cin >> el;
    el%2?a[1]++:a[0]++;
  }
  for (int i = 0;i < m;i++){
    cin >> el;
    el%2?b[1]++:b[0]++;
  }
  int ans = min(a[1], b[0]) + min(a[0], b[1]);
  cout << ans << '\n';
  return 0;
}
