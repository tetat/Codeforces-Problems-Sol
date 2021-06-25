/// Problem Name: 2-3-numbers
/// Problem Link: https://codeforces.com/problemset/problem/926/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  Long n = 20;
  Long two = 2;
  Long three = 3;
  vector <Long> v;
  Long lim = 2*1e9;
  for (Long i = 0;i <= 31;i++){
    for (Long j = 0;j <= 20;j++){
      Long tm = pow(two, i) * pow(three, j);
      if (tm <= lim)v.pb(tm);
    }
  }
  sort(v.begin(), v.end());
//  for (int i = 0;i < v.size();i++){
//    cout << v[i] << '\n';
//  }cout << '\n';
  int len = v.size();
  Long L, R;
  cin >> L >> R;
  //cout << len << '\n';
  int ans = 0;
  for (int i = 0;i < len;i++){
    if (v[i] >= L && v[i] <= R)ans++;
  }
  cout << ans << '\n';
  return 0;
}
