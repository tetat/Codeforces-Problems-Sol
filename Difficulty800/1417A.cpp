/// Problem Name: Copy-paste
/// Problem Link: https://codeforces.com/contest/1417/problem/A

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
    int n, k, el;
    cin >> n >> k;
    vector <int> ar(n);
    for (int i = 0;i < n;i++){
      cin >> ar[i];
    }
    sort(ar.begin(), ar.end());
    int ans = 0;
    for (int i = 1;i < ar.size();i++){
      int d = max(0, k-ar[i]);
      ans += d/ar[0];
    }
    cout << ans << '\n';
  }
  return 0;
}
