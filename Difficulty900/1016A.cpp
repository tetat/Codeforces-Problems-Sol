/// Problem Name: Death Note
/// Problem Link: https://codeforces.com/problemset/problem/1016/A

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
  int sum = 0;
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    sum += el;
    v.pb(sum/m);
    sum %= m;
  }
  for (int i = 0;i < n;i++){
    cout << v[i];
    if (i != n-1)cout << ' ';
  }cout << '\n';
  return 0;
}
