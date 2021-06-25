/// Problem Name: Zero Remainder Array
/// Problem Link: https://codeforces.com/problemset/problem/1374/D

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
    int n, k;
    cin >> n >> k;
    map <int, int> m;
    for (int i = 0;i < n;i++){
      int el;cin >> el;
      if (el%k){
        m[k-(el%k)]++;
      }
    }
    Long ans = 0;
    if (m.size()){
      map <int, int>::iterator it;
      vector <pair <int, int> > a;
      for (it = m.begin();it != m.end();it++){
        a.pb(mp(it->second, it->first));
      }
      sort(a.rbegin(), a.rend());
      int add = a[0].second;
      int f = a[0].first;
      for (int i = 0;i < a.size();i++){
        if (a[i].first == f){
          add = max(add, a[i].second);
        }else break;
      }
      ans = Long(a[0].first-1)*Long(k);
      ans += add+1;
    }
    cout << ans << '\n';
  }
  return 0;
}
