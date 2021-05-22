/// Problem Name: Valera and Plates
/// Problem Link: https://codeforces.com/problemset/problem/369/A

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
  int n, m, k, el;
  int one = 0;
  int two = 0;
  cin >> n >> m >> k;
  for (int i = 0;i < n;i++){
    cin >> el;
    el==1?one++:two++;
  }
  int ans = 0;
  int cut = min(m, one);
  m -= cut;
  one -= cut;
  ans += one;
  k += m;
  cut = min(k, two);
  k -= cut;
  two -= cut;
  ans += two;
  cout << ans << '\n';
  return 0;
}
