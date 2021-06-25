/// Problem Name: Average Sleep Time
/// Problem Link: https://codeforces.com/problemset/problem/808/B

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
  int n, k, el;
  cin >> n >> k;
  vector <Long> v(n+1, 0);
  for (int i = 1;i <= n;i++){
    cin >> v[i];
    v[i] += v[i-1];
  }
  int R = k;
  int L = 0;
  double sum = 0;
  double d = (n-k)+1;
  for ( ;R <= n;R++, L++){
    sum += v[R]-v[L];
  }
  cout << fixed << setprecision(6);
  cout << (sum/d) << '\n';
  return 0;
}
