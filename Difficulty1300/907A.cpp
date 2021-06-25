/// Problem Name: Masha and Bears
/// Problem Link: https://codeforces.com/problemset/problem/907/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  int a, b, c, m;
  cin >> a >> b >> c >> m;
  vector <int> v;
  v.pb(a+a);
  v.pb(b+b);
  v.pb(max(c, m));
  if (v[2]+v[2]>=v[1] || m+m<v[2] || c+c < v[2])cout << "-1" << '\n';
  else cout << v[0] << '\n' << v[1] << '\n' << v[2] << '\n';
  return 0;
}
