/// Problem Name: Multiplication Table
/// Problem Link: https://codeforces.com/problemset/problem/1220/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define IO cin.tie(0),cout.tie(0)
#define ISWS ios::sync_with_stdio(0)
typedef long long Long;
void FastIO(){ISWS;IO;}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  Long n;
  cin >> n;
  vector <vector <Long> > m(n);
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      Long el;
      cin >> el;
      m[i].pb(el);
    }
  }
  Long d = (m[0][1] * m[0][2]) / m[1][2];
  d = sqrt(d);
  cout << d;
  for (int i = 1;i < n;i++){
    cout << ' ' << m[0][i] / d;
  }cout << '\n';
  return 0;
}
