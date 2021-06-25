/// Problem Name: Duff in Love
/// Problem Link: https://codeforces.com/problemset/problem/588/B

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
  Long n;
  cin >> n;
  vector <Long> v;
  v.pb(n);
  for (Long i = 2;i*i <= n;i++){
    if (n%i==0){
      if (i*i != n){
        v.pb(i);
        v.pb(n/i);
      }else v.pb(i);
    }
  }
  sort(v.begin(), v.end(), greater<Long>());
  Long ans = 0;
  for (int i = 0;i < v.size();i++){
    bool ok = true;
    for (Long j = 2;j*j <= v[i];j++){
      if (v[i]%(j*j)==0){
        ok = false;
        break;
      }
    }
    if (ok){
      ans = v[i];
      break;
    }
  }
  cout << ans << '\n';
  return 0;
}
