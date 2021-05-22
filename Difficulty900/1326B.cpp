/// Problem Name: Maximums
/// Problem Link: https://codeforces.com/problemset/problem/1326/B

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
  Long n, el;
  vector <Long> v;
  Long sum = 0;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(sum+el);
    if (el>0)sum += el;
  }
  for (int i = 0;i < n;i++){
    cout << v[i];
    if (i != n-1)cout << ' ';
  }cout << '\n';
  return 0;
}
