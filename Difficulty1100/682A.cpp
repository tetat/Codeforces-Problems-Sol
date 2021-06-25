/// Problem Name: Alyona and Numbers
/// Problem Link: https://codeforces.com/problemset/problem/682/A

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
  Long n, m;
  cin >> n >> m;
  Long ans = 0;
  Long cut = 0;
  Long five = 5;
  for (Long i = 1;i <= n;i++){
    if (i%five==0)cut++;
    ans += (m+i)/five - cut;
  }
  cout << ans << '\n';
  return 0;
}
