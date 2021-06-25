/// Problem Name: Garbage Disposal
/// Problem Link: https://codeforces.com/problemset/problem/1070/D

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
  Long n, k, el;
  cin >> n >> k;
  vector <Long> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  Long ans = 0;
  Long cur = v[0];
  for (int i = 1;i < n;i++){
    if (cur<1){
      cur = v[i];
      continue;
    }
    Long d = ceil(double(cur)/double(k));
    v[i] += cur;
    v[i] -= min(v[i], d*k);
    cur = v[i];
    ans += d;
  }
  ans += ceil(double(cur)/double(k));
  cout << ans << '\n';
  return 0;
}
