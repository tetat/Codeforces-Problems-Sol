/// Problem Name: Odd sum
/// Problem Link: https://codeforces.com/problemset/problem/797/B

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

class data {
private:
  int n;
  vector <int> po, ne;
public:
  void solve();
};

void data::solve(){
  cin >> n;
  int ans = 0;
  for (int i = 0;i < n;i++){
    int el;cin >> el;
    if (el > 0){po.pb(el);ans += el;}
    if (el < 0)ne.pb(el);
  }
  if (ans%2==0) {
    int mn = 1e5;
    for (int i = 0;i < ne.size();i++){
      ne[i] = - ne[i];
      if (ne[i]%2)mn = min(mn, ne[i]);
    }
    for (int i = 0;i < po.size();i++){
      if (po[i]%2)mn = min(mn, po[i]);
    }
    ans -= mn;
  }
  cout << ans << '\n';
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int tc, ca = 0;
  data access;
  access.solve();
  return 0;
}
