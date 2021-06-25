/// Problem Name: Swords
/// Problem Link: https://codeforces.com/problemset/problem/1216/D

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
  int n, el;
  cin >> n;
  vector <int> v;
  int x = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    x = max(x, el);
    v.pb(el);
  }
  int mn = INT_MAX;
  Long lost = 0;
  for (int i = 0;i < n;i++){
    lost += x - v[i];
    if (x-v[i])mn = min(mn, x-v[i]);
  }
  vector <Long> fac;
  for (Long i = 1;i*i <= lost;i++){
    if (lost%i==0){
      if (i*i!=lost){
        fac.pb(i);
        fac.pb(lost/i);
      }else fac.pb(i);
    }
  }
  sort(fac.begin(), fac.end());
  int len = fac.size();
//  cout << lost << '\n';
//  for (int i = 0;i < len;i++){
//    cout << fac[i] << ' ';
//  }cout << '\n';
  Long z = 0;
  for (int i = len-1;i >= 0;i--){
    bool ok = true;
    z = fac[i];
    for (int j = 0;j < n;j++){
      if ((x-v[j])%z){
        ok = false;
        break;
      }
    }
    if (ok)break;
  }
  Long y = lost/z;
  cout << y << ' ' << z << '\n';
  return 0;
}
