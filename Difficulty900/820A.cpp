/// Problem Name: Mister B and Book Reading
/// Problem Link: https://codeforces.com/problemset/problem/820/A

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
  int c, v0, v1, a, l;
  cin >> c >> v0 >> v1 >> a >> l;
  int ans = 1;
  int i = 1;
  c -= v0;
  while (c > 0){
    int cut = v0 + (i*a);
    cut = min(cut, v1) - l;
    c -= cut;
    ans++;
    i++;
  }
  cout << ans << '\n';
  return 0;
}
