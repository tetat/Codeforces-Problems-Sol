/// Problem Name: Array Cancellation
/// Problem Link: https://codeforces.com/problemset/problem/1405/B

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
    int n;
    cin >> n;
    vector <pair <int, int> > po, ne;
    for (int i = 0;i < n;i++){
      int el;cin >> el;
      if (el < 0)ne.pb(mp(el, i));
      else po.pb(mp(el, i));
    }
    for (int i = 0, j = 0;i < po.size();i++){
      for ( ;j < ne.size();j++){
        if (po[i].second > ne[j].second)continue;
        int cut = min(po[i].first, -ne[j].first);
        po[i].first -= cut;
        ne[j].first += cut;
        if (po[i].first == 0)break;
      }
    }
    Long ans = 0;
    for (int i = 0;i < po.size();i++){
      ans += po[i].first;
    }
    cout << ans << '\n';
  }
  return 0;
}
