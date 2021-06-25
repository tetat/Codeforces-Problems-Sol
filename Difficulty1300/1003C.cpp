/// Problem Name: Intense Heat
/// Problem Link: https://codeforces.com/problemset/problem/1003/C

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
  int n, x, el;
  cin >> n >> x;
  vector <int> v(n+1, 0);
  for (int i = 0;i < n;i++){
    cin >> v[i+1];
    v[i+1] += v[i];
  }
  double ans = 0;
  for ( ;x <= n;x++){
    for (int R = x, L = 0;R <= n;R++, L++){
      double sum = double(v[R]-v[L]);
      ans = max(ans, sum/double(x));
    }
  }
  cout << fixed << setprecision(6);
  cout << ans << '\n';
  return 0;
}
