/// Problem Name: Splitting money
/// Problem Link: https://codeforces.com/problemset/problem/1046/F

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

const int N = 1e6;

int main()
{
  faster();
  int tc, ca = 0;
  Long n, el;
  cin >> n;
  vector <Long> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  Long x, f;
  cin >> x >> f;
  Long ans = 0;
  for (int i = 0;i < n;i++){
    if (v[i] <= x)continue;
    v[i] -= x;
    ans += ceil(double(v[i])/double(x+f)) * f;
  }
  cout << ans << '\n';
  return 0;
}
