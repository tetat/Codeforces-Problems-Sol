/// Problem Name: Negative Prefixes
/// Problem Link: https://codeforces.com/problemset/problem/1418/B

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
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0;i < n;i++){
      cin >> a[i];
    }
    vector <int> oc(n), r;
    for (int i = 0;i < n;i++){
      cin >> oc[i];
      if (oc[i]==0)r.pb(a[i]);
    }
    if (r.size())sort(r.rbegin(), r.rend());
    for (int i = 0, j = 0;i < n && j < r.size();i++){
      if (oc[i]==0){
        a[i] = r[j];
        j++;
      }
    }
    for (int i = 0;i < n;i++){
      cout << a[i] << ' ';
    }cout << '\n';
  }
  return 0;
}
