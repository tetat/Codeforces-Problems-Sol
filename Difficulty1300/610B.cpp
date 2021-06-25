/// Problem Name: Vika and Squares
/// Problem Link: https://codeforces.com/problemset/problem/610/B

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

const int N = 1e3;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> v(n);
  int mn = INT_MAX;
  for (int i = 0;i < n;i++){
    cin >> v[i];
    mn = min(mn, v[i]);
  }
  int L = 0;
  while (L < n && v[L] != mn)L++;
  int R = n-1;
  while (R >= 0 && v[R] != mn)R--;
  Long ans = Long(n)*Long(mn);
  Long mx = L+((n-1)-R);
  while (L < R){
    Long tm = 0;
    while (L < R && v[L]==mn)L++;
    while (L < R && v[L]!=mn){
      tm++;
      L++;
    }
    mx = max(mx, tm);
  }
  ans += mx;
  cout << ans << '\n';
  return 0;
}
