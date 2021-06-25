/// Problem Name: Lecture Sleep
/// Problem Link: https://codeforces.com/problemset/problem/961/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  faster();
  int tc, ca = 0;
  int n, k, el;
  cin >> n >> k;
  vector <int> a;
  for (int i = 0;i < n;i++){
    cin >> el;
    a.pb(el);
  }
  vector <int> c_sum(n+1, 0);
  int ans = 0;
  int sum = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (el)ans += a[i];
    else sum += a[i];
    c_sum[i+1] = sum;
  }
  int mx = 0;
  for (int L = 0, R = k;R <= n;L++, R++){
    mx = max(mx, c_sum[R]-c_sum[L]);
  }
  ans += mx;
  cout << ans << '\n';
  return 0;
}
