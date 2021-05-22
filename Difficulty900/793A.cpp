/// Problem Name: Oleg and shares
/// Problem Link: https://codeforces.com/problemset/problem/793/A

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
  Long n, k, el;
  vector <Long> v;
  cin >> n >> k;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  sort(v.begin(), v.end());
  Long ans = 0;
  for (int i = 1;i < n;i++){
    if ((v[i]-v[0])%k == 0){
      ans += (v[i]-v[0]) / k;
    }else {
      ans = -1;
      break;
    }
  }
  cout << ans << '\n';
  return 0;
}
