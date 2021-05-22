/// Problem Name: Omkar and Infinity Clock
/// Problem Link: https://codeforces.com/problemset/problem/1392/B

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
  cin >> tc;
  while (tc--){
    Long n, k;
    cin >> n >> k;
    vector <Long> a(n);
    Long mx = -(1e18);
    for (int i = 0;i < n;i++){
      cin >> a[i];
      mx = max(mx, a[i]);
    }
    vector <Long> b(n);
    Long mx_b = -(1e18);
    for (int i = 0;i < n;i++){
      b[i] = mx-a[i];
      mx_b = max(mx_b, b[i]);
    }
    for (int i = 0;i < n;i++){
      a[i] = mx_b - b[i];
    }
    if (k%2){
      for (int i = 0;i < n;i++){
        cout << b[i] << ' ';
      }cout << '\n';
    }else {
      for (int i = 0;i < n;i++){
        cout << a[i] << ' ';
      }cout << '\n';
    }
  }
  return 0;
}
