/// Problem Name: Rectangles
/// Problem Link: https://codeforces.com/problemset/problem/844/B

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
  Long n, m, el;
  cin >> n >> m;
  vector <Long> v[n];
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      cin >> el;
      v[i].pb(el);
    }
  }
  Long sum = 0;
  Long  on = 1;
  for (int i = 0;i < n;i++){
    Long zero = 0;
    Long one = 0;
    for (int j = 0;j < m;j++){
      if (v[i][j]==1)one++;
      if (v[i][j]==0)zero++;
    }
    sum += (1LL<<one) - 1;
    sum += (1LL<<zero) - 1;
  }
  for (int i = 0;i < m;i++){
    Long zero = 0;
    Long one = 0;
    for (int j = 0;j < n;j++){
      if (v[j][i]==1)one++;
      if (v[j][i]==0)zero++;
    }
    sum += (1LL<<one) - 1;
    sum += (1LL<<zero) - 1;
  }
  cout << (sum - (n*m)) << '\n';
  return 0;
}
