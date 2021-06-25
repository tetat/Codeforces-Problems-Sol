/// Problem Name: Intercepted Message
/// Problem Link: https://codeforces.com/problemset/problem/950/B

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
  int n, m, el;
  cin >> n >> m;
  vector <int> a;
  vector <int> b;
  for (int i = 0;i < n;i++){
    cin >> el;
    a.pb(el);
  }
  for (int i = 0;i < m;i++){
    cin >> el;
    b.pb(el);
  }
  Long S1 = 0;
  Long S2 = 0;
  int ans = 0;
  for (int i = 0, j = 0;i < n;i++){
    S1 += a[i];
    for ( ;j < m;j++){
      if (S1 > S2)S2 += b[j];
      else break;
    }
    if (S1 == S2){
      ans++;
      S1 = 0;
      S2 = 0;
    }
  }
  cout << ans << '\n';
  return 0;
}
