/// Problem Name: Fast Food Restaurant
/// Problem Link: https://codeforces.com/problemset/problem/1313/A

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
    vector <int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    int ans = 0;
    sort(v.rbegin(), v.rend());
    for (int i = 1;i < 8;i++){
      vector <int> p;
      bool ok = true;
      for (int j = 0;j < 3;j++){
        if ((i & (1 << j)) > 0){
          if (v[j]){
            p.pb(j);
          }else ok = false;
        }
      }
      if (ok && p.size()){
        for (int j = 0;j < p.size();j++){
          v[p[j]]--;
        }
        ans++;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
