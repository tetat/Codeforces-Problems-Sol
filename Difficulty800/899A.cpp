/// Problem Name: Splitting in Teams
/// Problem Link: https://codeforces.com/problemset/problem/899/A

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
  int n, el;
  cin >> n;
  int one = 0;
  int two = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    el==1?one++:two++;
  }
  int ans = min(one, two);
  one -= ans;
  ans += one/3;
  cout << ans << '\n';
  return 0;
}
