/// Problem Name: Tokitsukaze and Discard Items
/// Problem Link: https://codeforces.com/problemset/problem/1190/A

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
  Long n, m, k;
  cin >> n >> m >> k;
  vector <Long> v(m);
  for (int i = 0;i < m;i++){
    cin >> v[i];
  }
  Long ans = 1;
  Long cur = min(Long((ceil(double(v[0])/double(k)))) * k, n);
  Long cut = 0;
  //cout << cur << '\n';
  for (int i = 0;i < m;i++){
    Long tm = v[i]-cut;
    if (tm <= cur)continue;
    cut = i;
    tm = v[i]-cut;
    if (tm > cur){
      cur = min(Long(cur+ceil(double(tm-cur)/double(k)) * k), n);
    }
    ans++;
  }
  cout << ans << '\n';
  return 0;
}
