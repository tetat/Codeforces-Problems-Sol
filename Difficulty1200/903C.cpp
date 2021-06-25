/// Problem Name: Boxes Packing
/// Problem Link: https://codeforces.com/problemset/problem/903/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  map <int, int> m;
  map <int, int>::iterator it;
  for (int i = 0;i < n;i++){
    cin >> el;
    m[el]++;
  }
  int mx = 0;
  for (it = m.begin();it != m.end();it++){
    mx = max(mx, it->second);
  }
  cout << mx << '\n';
  return 0;
}
