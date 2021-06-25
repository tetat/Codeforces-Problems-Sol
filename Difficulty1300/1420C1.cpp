/// Problem Name: Pokémon Army (easy version)
/// Problem Link: https://codeforces.com/problemset/problem/1420/C1

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for (int i = 0;i < n;i++){
      cin >> a[i];
    }
    a.pb(0);
    Long ans = 0;
    for (int i = 0;i < n;i++){
      ans += max(0, a[i]-a[i+1]);
    }
    cout << ans << '\n';
  }
  return 0;
}
